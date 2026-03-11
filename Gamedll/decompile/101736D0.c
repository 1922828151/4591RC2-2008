/*
 * func-name: ?PlayAnimation@Robot@GameClient@@QAE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MMMM_N@Z_0
 * func-address: 0x101736d0
 * callers: 0x10017f35
 * callees: 0x1000815c, 0x1000d67a, 0x100124ae, 0x10013c50, 0x102c71e0, 0x102c9d62
 */

bool __thiscall GameClient::Robot::PlayAnimation(
        GameClient::CombinRobot **this,
        int a2,
        float a3,
        float a4,
        float a5,
        float a6,
        bool a7)
{
  int v8; // eax
  int v9; // eax
  int v10; // eax
  bool v11; // al
  bool v13; // [esp+27h] [ebp-99h]
  _BYTE v14[28]; // [esp+28h] [ebp-98h] BYREF
  _BYTE v15[28]; // [esp+44h] [ebp-7Ch] BYREF
  _BYTE v16[28]; // [esp+60h] [ebp-60h] BYREF
  int v17; // [esp+7Ch] [ebp-44h] BYREF
  _BYTE v18[44]; // [esp+80h] [ebp-40h] BYREF
  int v19; // [esp+ACh] [ebp-14h]
  int v20; // [esp+BCh] [ebp-4h]

  sub_102C71E0(v16, a2);
  v20 = 0;
  v8 = std::string::length(v16);
  v9 = std::string::substr(v16, v15, 0, v8 - 2);
  LOBYTE(v20) = 1;
  v10 = std::operator+<char>(v14, "D", v9);
  LOBYTE(v20) = 2;
  std::string::operator=(v16, v10);
  LOBYTE(v20) = 1;
  std::string::~string(v14);
  LOBYTE(v20) = 0;
  std::string::~string(v15);
  GameClient::CombinRobot::GetAnimHandle((int)&v17, (int)v16);
  LOBYTE(v20) = 3;
  if ( v19 != -1 )
  {
    switch ( v17 )
    {
      case 0:
        v11 = GameClient::CombinRobot::PlayAnimationUp(this[43], v19, a3, a4, a5, a6, a7);
LABEL_4:
        v13 = v11;
        LOBYTE(v20) = 0;
        AnimationSet::~AnimationSet((AnimationSet *)v18);
        v20 = -1;
        std::string::~string(v16);
        return v13;
      case 1:
        v11 = GameClient::CombinRobot::PlayAnimationDown(this[43], v19, a3, a4, a5, a6, a7);
        goto LABEL_4;
      case 2:
        v11 = GameClient::CombinRobot::PlayAnimation(this[43], v19, a3, -1.0, a5, a6, a7);
        goto LABEL_4;
    }
  }
  LOBYTE(v20) = 0;
  AnimationSet::~AnimationSet((AnimationSet *)v18);
  v20 = -1;
  std::string::~string(v16);
  return 0;
}
