/*
 * func-name: ?PlayAnimation@Equip@GameClient@@QAE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MMMM_N@Z_0
 * func-address: 0x10159890
 * callers: 0x10006d89
 * callees: 0x10003f2b, 0x100081c5, 0x10013f7f, 0x10016b5d, 0x102c71e0, 0x102c9d62
 */

char __thiscall GameClient::Equip::PlayAnimation(int this, int a2, float a3, float a4, float a5, int a6, bool a7)
{
  int AnimHandle; // eax
  int v10; // eax
  int AnimFPV; // eax
  _BYTE v12[28]; // [esp+1Ch] [ebp-2Ch] BYREF
  int v13; // [esp+44h] [ebp-4h]

  sub_102C71E0(v12, a2);
  v13 = 0;
  AnimHandle = GameClient::AEquip::GetAnimHandle((int)v12);
  if ( (AnimHandle == -1
     || GameClient::AEquip::PlayAnimation(*(GameClient::AEquip **)(this + 180), AnimHandle, a3, a4, a5, a7))
    && ((v10 = *(_DWORD *)(this + 148)) == 0
     || *(_DWORD *)(v10 + 228) != this
     || (AnimFPV = GameClient::AEquip::GetAnimFPV((int)v12), AnimFPV == -1)
     || GameClient::AEquip::PlayAnimationFPV(*(GameClient::AEquip **)(this + 180), AnimFPV, a3, a4, a5, a7)) )
  {
    v13 = -1;
    std::string::~string(v12);
    return 1;
  }
  else
  {
    v13 = -1;
    std::string::~string(v12);
    return 0;
  }
}
