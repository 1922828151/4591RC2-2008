/*
 * func-name: sub_10137700
 * func-address: 0x10137700
 * callers: none
 * callees: 0x1000b3e3, 0x1000eee4, 0x102c9d50
 */

char __thiscall sub_10137700(_DWORD *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  void *v9; // ebp
  _DWORD *v10; // eax
  int v11; // esi
  void **v12; // ebx
  int v14; // [esp+14h] [ebp-14h] BYREF
  void *v15; // [esp+18h] [ebp-10h]
  int v16; // [esp+24h] [ebp-4h]

  v16 = 0;
  sub_1000EEE4((int)&v14, (int)&a2);
  v9 = (void *)this[23];
  v10 = this + 22;
  v11 = v14;
  if ( !v14 || (_DWORD *)v14 != v10 )
    _invalid_parameter_noinfo();
  v12 = (void **)v15;
  if ( v15 == v9 )
  {
    v16 = -1;
    std::string::~string(&a2);
    return 0;
  }
  else
  {
    if ( !v11 )
      _invalid_parameter_noinfo();
    if ( v12 == *(void ***)(v11 + 4) )
      _invalid_parameter_noinfo();
    operator delete(v12[9]);
    sub_1000B3E3((int)&v14, v11, v12);
    v16 = -1;
    std::string::~string(&a2);
    return 1;
  }
}
