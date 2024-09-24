#include "wbInput.h"

std::vector<wb::Input::Key> wb::Input::Keys = {};

int ASCII[(UINT)wb::eKeyCode::END] =
{
    'Q','W','E','R','T','Y','U','I','O','P',
    'A','S','D','F','G','H','J','K','L',
    'Z','X','C','V','B','N','M',
    VK_LEFT,VK_RIGHT,VK_DOWN,VK_UP,

};

void wb::Input::Initialize()
{
    CreateKeys();
}

void wb::Input::Update()
{
    //for (size_t i = 0; i < mKeys.size(); i++)
    //{
    //    // 키가 눌렸다
    //    if (GetAsyncKeyState(ASCII[i]) & 0x8000)
    //    {
    //        if (mKeys[i].bPressed)
    //            mKeys[i].state = eKeyState::Pressed;
    //        else
    //            mKeys[i].state = eKeyState::Down;
    //        
    //        mKeys[i].bPressed = true;
    //    }
    //    else // 키가 안눌렸다.
    //    {
    //        if (mKeys[i].bPressed)
    //            mKeys[i].state = eKeyState::Up;
    //        else
    //            mKeys[i].state = eKeyState::None;

    //        mKeys[i].bPressed = false;
    //    }
    //}

    updateKeys();
}

void wb::Input::CreateKeys()
{
    for (size_t i = 0; i < (UINT)eKeyCode::END; i++)
    {
        Key key = {};
        key.bPressed = false;
        key.state = eKeyState::None;
        key.KeyCode = (eKeyCode)i;

        Keys.push_back(key);
    }
}

void wb::Input::updateKeys()
{
    std::for_each(Keys.begin(), Keys.end(),
        [](Key& key)->void 
        {
            updateKey(key);
        });
}

void wb::Input::updateKey(Input::Key& key)
{
    //for (size_t i = 0; i < mKeys.size(); i++)
    //{
    //    // 키가 눌렸다
    //    if (GetAsyncKeyState(ASCII[i]) & 0x8000)
    //    {
    //        if (mKeys[i].bPressed)
    //            mKeys[i].state = eKeyState::Pressed;
    //        else
    //            mKeys[i].state = eKeyState::Down;

    //        mKeys[i].bPressed = true;
    //    }
    //    else // 키가 안눌렸다.
    //    {
    //        if (mKeys[i].bPressed)
    //            mKeys[i].state = eKeyState::Up;
    //        else
    //            mKeys[i].state = eKeyState::None;

    //        mKeys[i].bPressed = false;
    //    }
    //}

    if (isKeyDown(key.KeyCode))
    {
        updateKeyDown(key);
    }
    else
    {
        updateKeyUp(key);
    }
}

bool wb::Input::isKeyDown(eKeyCode code)
{
    return GetAsyncKeyState(ASCII[(UINT)code]) & 0x8000;
}

void wb::Input::updateKeyDown(Key& key)
{
    if (key.bPressed)
        key.state = eKeyState::Pressed;
    else
        key.state = eKeyState::Down;

    key.bPressed = true;
    
}

void wb::Input::updateKeyUp(Key& key)
{
    if (key.bPressed)
        key.state = eKeyState::Up;
    else
        key.state = eKeyState::None;

    key.bPressed = false;
}
