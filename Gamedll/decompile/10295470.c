/*
 * func-name: sub_10295470
 * func-address: 0x10295470
 * callers: 0x100042a0
 * callees: 0x1000e386, 0x10015910, 0x102c9d50, 0x102c9d62
 */

void __thiscall sub_10295470(char *this, int a2, int a3)
{
  unsigned int v3; // edi
  char *v4; // esi
  int i; // ebp
  int v6; // eax
  int v7; // eax
  char *v8; // esi
  char *v9; // edi
  int v10; // [esp+0h] [ebp-64h]
  int v11; // [esp+4h] [ebp-60h]
  _BYTE v12[32]; // [esp+18h] [ebp-4Ch] BYREF
  int v13; // [esp+38h] [ebp-2Ch]
  void *v14; // [esp+48h] [ebp-1Ch]
  char *v15; // [esp+4Ch] [ebp-18h]
  int v16; // [esp+50h] [ebp-14h]
  int v17; // [esp+60h] [ebp-4h]

  v3 = 0;
  v4 = this + 532;
  for ( i = 0; ; i += 60 )
  {
    v6 = *((_DWORD *)v4 + 1);
    if ( !v6 || v3 >= (*((_DWORD *)v4 + 2) - v6) / 60 )
      break;
    v7 = *((_DWORD *)v4 + 1);
    if ( !v7 || v3 >= (*((_DWORD *)v4 + 2) - v7) / 60 )
      _invalid_parameter_noinfo();
    if ( *(_DWORD *)(*((_DWORD *)v4 + 1) + i + 32) == a3 )
      return;
    ++v3;
  }
  std::wstring::wstring(v12);
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 1;
  v12[28] = 1;
  v13 = a3;
  std::wstring::operator=(v12, a2);
  sub_1000E386((int)v12);
  v8 = (char *)v14;
  v17 = 2;
  if ( v14 )
  {
    v9 = v15;
    if ( v14 != v15 )
    {
      do
      {
        sub_10015910(v10, v11);
        v8 += 128;
      }
      while ( v8 != v9 );
      v8 = (char *)v14;
    }
    operator delete(v8);
  }
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = -1;
  std::wstring::~wstring(v12);
}
