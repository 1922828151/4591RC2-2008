/*
 * func-name: sub_10103CB0
 * func-address: 0x10103cb0
 * callers: 0x1000c757
 * callees: 0x10002ce8, 0x10008b98, 0x1001497a, 0x1001701c
 */

int __thiscall sub_10103CB0(_DWORD *this, void *a2)
{
  _DWORD *v3; // edi
  int v4; // ebp
  void *v5; // eax
  _DWORD *v6; // eax
  int v8; // [esp+0h] [ebp-B0h]
  int v9; // [esp+4h] [ebp-ACh]
  _DWORD *v10; // [esp+14h] [ebp-9Ch] BYREF
  int v11; // [esp+18h] [ebp-98h]
  int v12; // [esp+1Ch] [ebp-94h] BYREF
  int v13; // [esp+20h] [ebp-90h]
  int v14[12]; // [esp+28h] [ebp-88h] BYREF
  int v15; // [esp+ACh] [ebp-4h]

  sub_10002CE8((int)&v10, (int)a2);
  v3 = v10;
  v13 = this[2];
  if ( !v10 || v10 != this + 1 )
    _invalid_parameter_noinfo();
  v4 = v11;
  if ( v11 == v13 )
  {
    AnimationSet::AnimationSet((AnimationSet *)v14);
    v14[11] = -1;
    v15 = 0;
    v5 = (void *)sub_1001497A(a2, (int)v14);
    LOBYTE(v15) = 1;
    v6 = (_DWORD *)sub_10008B98((int)&v12, v5);
    v3 = (_DWORD *)*v6;
    v4 = v6[1];
    LOBYTE(v15) = 0;
    sub_1001701C(v8, v9);
    v15 = -1;
    AnimationSet::~AnimationSet((AnimationSet *)v14);
  }
  if ( !v3 )
    _invalid_parameter_noinfo();
  if ( v4 == v3[1] )
    _invalid_parameter_noinfo();
  return v4 + 36;
}
