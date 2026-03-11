/*
 * func-name: sub_100E2160
 * func-address: 0x100e2160
 * callers: 0x1000bf50
 * callees: 0x1000cca2, 0x1001801b, 0x102c9d62
 */

void __thiscall sub_100E2160(_DWORD **this)
{
  _DWORD *v1; // edi
  _DWORD **v2; // esi
  _DWORD **v3; // ebx
  _DWORD *v4; // ebp
  _DWORD *v5; // edi
  unsigned int v6; // ebp
  int v7; // ebx
  int v8; // eax
  int v9; // esi
  int v10; // eax
  _DWORD v11[14]; // [esp-14h] [ebp-74h] BYREF
  _DWORD **i; // [esp+24h] [ebp-3Ch]
  _DWORD *v13; // [esp+28h] [ebp-38h]
  _DWORD **v14; // [esp+2Ch] [ebp-34h]
  _DWORD *v15; // [esp+30h] [ebp-30h]
  _BYTE v16[28]; // [esp+34h] [ebp-2Ch] BYREF
  int v17; // [esp+5Ch] [ebp-4h]

  v1 = (_DWORD *)*this[2];
  v2 = this + 1;
  v3 = this + 1;
  v14 = this + 1;
  v13 = v1;
  for ( i = this + 1; ; v3 = i )
  {
    v4 = v2[1];
    if ( !v3 || v3 != v2 )
      _invalid_parameter_noinfo();
    if ( v1 == v4 )
      break;
    if ( !v3 )
      _invalid_parameter_noinfo();
    if ( v1 == v3[1] )
      _invalid_parameter_noinfo();
    v5 = v1 + 4;
    v6 = 0;
    if ( sub_1000CCA2() )
    {
      v7 = 0;
      do
      {
        v8 = v5[1];
        if ( !v8 || v6 >= (v5[2] - v8) / 92 )
          _invalid_parameter_noinfo();
        v9 = v7 + v5[1];
        std::string::string(v16);
        v11[8] = v16;
        v11[7] = v9 + 64;
        v15 = v11;
        v17 = 0;
        std::string::string(v11, (void *)(v9 + 8));
        LOBYTE(v17) = 1;
        v10 = Input::Instance(v11[0]);
        Input::GetBoundKeys(v10);
        v17 = -1;
        std::string::~string(v16);
        ++v6;
        v7 += 92;
      }
      while ( v6 < sub_1000CCA2() );
      v2 = v14;
    }
    sub_1001801B();
    v1 = v13;
  }
}
