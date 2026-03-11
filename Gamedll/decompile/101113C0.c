/*
 * func-name: ?GetAnimHandle@CombinRobot@GameClient@@QAE?AUAnimSetInfo@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z_0
 * func-address: 0x101113c0
 * callers: 0x100124ae
 * callees: 0x10004fac, 0x102c71e0, 0x102c7580, 0x102c9d62
 */

_DWORD *__thiscall GameClient::CombinRobot::GetAnimHandle(_DWORD *this, _DWORD *a2, int a3)
{
  void *v4; // eax
  int v5; // eax
  _DWORD *v6; // ebx
  _DWORD *v7; // eax
  _DWORD *v8; // esi
  _DWORD *v9; // ebp
  _DWORD *v11; // [esp+18h] [ebp-88h] BYREF
  _DWORD *v12; // [esp+1Ch] [ebp-84h]
  _DWORD *v13; // [esp+20h] [ebp-80h]
  _BYTE v14[28]; // [esp+24h] [ebp-7Ch] BYREF
  _BYTE v15[28]; // [esp+40h] [ebp-60h] BYREF
  int v16; // [esp+5Ch] [ebp-44h]
  _BYTE v17[44]; // [esp+60h] [ebp-40h] BYREF
  int v18; // [esp+8Ch] [ebp-14h]
  int v19; // [esp+9Ch] [ebp-4h]

  v13 = a2;
  AnimationSet::AnimationSet((AnimationSet *)v17);
  v16 = 0;
  v18 = -1;
  v19 = 1;
  v4 = (void *)sub_102C71E0(v15, a3);
  LOBYTE(v19) = 2;
  v5 = sub_102C7580(v14, v4);
  LOBYTE(v19) = 3;
  sub_10004FAC((int)&v11, v5);
  LOBYTE(v19) = 2;
  std::string::~string(v14);
  LOBYTE(v19) = 1;
  std::string::~string(v15);
  v6 = (_DWORD *)this[428];
  v7 = this + 427;
  v8 = v11;
  if ( !v11 || v11 != v7 )
    _invalid_parameter_noinfo();
  v9 = v12;
  if ( v12 == v6 )
  {
    *a2 = v16;
    AnimationSet::AnimationSet((AnimationSet *)(a2 + 1), (const struct AnimationSet *)v17);
    a2[12] = v18;
  }
  else
  {
    if ( !v8 )
      _invalid_parameter_noinfo();
    if ( v9 == (_DWORD *)v8[1] )
      _invalid_parameter_noinfo();
    *a2 = v9[9];
    AnimationSet::AnimationSet((AnimationSet *)(a2 + 1), (const struct AnimationSet *)(v9 + 10));
    a2[12] = v9[21];
  }
  LOBYTE(v19) = 0;
  AnimationSet::~AnimationSet((AnimationSet *)v17);
  return a2;
}
