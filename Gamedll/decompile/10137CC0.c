/*
 * func-name: sub_10137CC0
 * func-address: 0x10137cc0
 * callers: 0x10002027
 * callees: 0x1000aede, 0x1000e1ba, 0x10010c49, 0x100132e6, 0x102c9d50
 */

int __thiscall sub_10137CC0(int this)
{
  int *i; // ebx
  _DWORD **v3; // eax
  _DWORD *v4; // edi
  bool v5; // zf
  _DWORD *v6; // ebp
  int v7; // eax
  unsigned int v8; // ebx
  bool v9; // cc
  unsigned int v10; // ebp
  unsigned int v11; // ebx
  _DWORD *j; // ebp
  void *v13; // edi
  _DWORD **v14; // eax
  _DWORD *v15; // edi
  _DWORD *v16; // ebp
  int v17; // eax
  unsigned int v18; // ebx
  unsigned int v19; // ebp
  unsigned int v20; // ebx
  int result; // eax
  int v22; // [esp+14h] [ebp-1Ch] BYREF
  int v23; // [esp+18h] [ebp-18h]
  _BYTE v24[8]; // [esp+1Ch] [ebp-14h] BYREF
  int v25; // [esp+2Ch] [ebp-4h]

  *(_DWORD *)(this + 40) = 0;
  *(_DWORD *)(this + 36) = 0;
  std::string::operator=(this + 4, &unk_10313B08);
  CloseHandle(*(HANDLE *)(this + 32));
  *(_DWORD *)(this + 32) = 0;
  *(_DWORD *)(this + 124) = 1;
  for ( i = **(int ***)(this + 92); i != *(int **)(this + 92); i = (int *)*i )
  {
    operator delete((void *)i[9]);
    if ( i == *(int **)(this + 92) )
      _invalid_parameter_noinfo();
  }
  v3 = *(_DWORD ***)(this + 92);
  v4 = *v3;
  *v3 = v3;
  *(_DWORD *)(*(_DWORD *)(this + 92) + 4) = *(_DWORD *)(this + 92);
  v5 = v4 == *(_DWORD **)(this + 92);
  *(_DWORD *)(this + 96) = 0;
  if ( !v5 )
  {
    do
    {
      v6 = (_DWORD *)*v4;
      std::string::~string(v4 + 2);
      operator delete(v4);
      v4 = v6;
    }
    while ( v6 != *(_DWORD **)(this + 92) );
  }
  v7 = *(_DWORD *)(this + 92);
  v22 = this + 88;
  v8 = *(_DWORD *)(this + 108);
  v9 = *(_DWORD *)(this + 104) <= v8;
  v23 = v7;
  if ( !v9 )
    _invalid_parameter_noinfo();
  v10 = *(_DWORD *)(this + 104);
  if ( v10 > *(_DWORD *)(this + 108) )
    _invalid_parameter_noinfo();
  sub_10010C49((int)v24, this + 100, v10, this + 100, v8);
  v11 = *(_DWORD *)(this + 104);
  if ( v11 > *(_DWORD *)(this + 108) )
    _invalid_parameter_noinfo();
  sub_1000E1BA(this + 100, v11, 9, (int)&v22);
  *(_DWORD *)(this + 116) = 1;
  *(_DWORD *)(this + 120) = 1;
  for ( j = **(_DWORD ***)(this + 52); j != *(_DWORD **)(this + 52); j = (_DWORD *)*j )
  {
    v22 = j[9];
    v13 = (void *)v22;
    if ( v22 )
    {
      v25 = 0;
      std::string::~string((void *)(v22 + 28));
      v25 = -1;
      std::string::~string(v13);
      operator delete(v13);
    }
    if ( j == *(_DWORD **)(this + 52) )
      _invalid_parameter_noinfo();
  }
  v14 = *(_DWORD ***)(this + 52);
  v15 = *v14;
  *v14 = v14;
  *(_DWORD *)(*(_DWORD *)(this + 52) + 4) = *(_DWORD *)(this + 52);
  v5 = v15 == *(_DWORD **)(this + 52);
  *(_DWORD *)(this + 56) = 0;
  if ( !v5 )
  {
    do
    {
      v16 = (_DWORD *)*v15;
      std::string::~string(v15 + 2);
      operator delete(v15);
      v15 = v16;
    }
    while ( v16 != *(_DWORD **)(this + 52) );
  }
  v17 = *(_DWORD *)(this + 52);
  v22 = this + 48;
  v18 = *(_DWORD *)(this + 68);
  v9 = *(_DWORD *)(this + 64) <= v18;
  v23 = v17;
  if ( !v9 )
    _invalid_parameter_noinfo();
  v19 = *(_DWORD *)(this + 64);
  if ( v19 > *(_DWORD *)(this + 68) )
    _invalid_parameter_noinfo();
  sub_100132E6((int)v24, this + 60, v19, this + 60, v18);
  v20 = *(_DWORD *)(this + 64);
  if ( v20 > *(_DWORD *)(this + 68) )
    _invalid_parameter_noinfo();
  sub_1000AEDE(this + 60, v20, 9, (int)&v22);
  result = 1;
  *(_DWORD *)(this + 76) = 1;
  *(_DWORD *)(this + 80) = 1;
  return result;
}
