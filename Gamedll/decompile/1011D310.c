/*
 * func-name: sub_1011D310
 * func-address: 0x1011d310
 * callers: 0x10014d3a
 * callees: 0x10004fac, 0x1000db6b, 0x10013e35, 0x1001761b
 */

int __thiscall sub_1011D310(_DWORD *this, void *a2)
{
  _DWORD *v3; // edi
  int v4; // ebp
  void *v5; // eax
  _DWORD *v6; // eax
  int v8; // [esp+0h] [ebp-B8h]
  int v9; // [esp+4h] [ebp-B4h]
  _DWORD *v10; // [esp+14h] [ebp-A4h] BYREF
  int v11; // [esp+18h] [ebp-A0h]
  int v12; // [esp+1Ch] [ebp-9Ch] BYREF
  int v13; // [esp+20h] [ebp-98h]
  int v14; // [esp+28h] [ebp-90h] BYREF
  _BYTE v15[44]; // [esp+2Ch] [ebp-8Ch] BYREF
  int v16; // [esp+58h] [ebp-60h]
  int v17; // [esp+B4h] [ebp-4h]

  sub_10004FAC((int)&v10, (int)a2);
  v3 = v10;
  v13 = this[2];
  if ( !v10 || v10 != this + 1 )
    _invalid_parameter_noinfo();
  v4 = v11;
  if ( v11 == v13 )
  {
    AnimationSet::AnimationSet((AnimationSet *)v15);
    v14 = 0;
    v16 = -1;
    v17 = 0;
    v5 = (void *)sub_1001761B(a2, (int)&v14);
    LOBYTE(v17) = 1;
    v6 = (_DWORD *)sub_1000DB6B((int)&v12, v5);
    v3 = (_DWORD *)*v6;
    v4 = v6[1];
    LOBYTE(v17) = 0;
    sub_10013E35(v8, v9);
    v17 = -1;
    AnimationSet::~AnimationSet((AnimationSet *)v15);
  }
  if ( !v3 )
    _invalid_parameter_noinfo();
  if ( v4 == v3[1] )
    _invalid_parameter_noinfo();
  return v4 + 36;
}
