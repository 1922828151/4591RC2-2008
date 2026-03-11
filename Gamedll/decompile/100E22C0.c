/*
 * func-name: sub_100E22C0
 * func-address: 0x100e22c0
 * callers: 0x1001239b
 * callees: 0x1000cca2, 0x1001801b
 */

void __thiscall sub_100E22C0(_DWORD **this)
{
  _DWORD **v1; // ebx
  _DWORD *v2; // edi
  _DWORD **v3; // esi
  _DWORD *v4; // ebp
  _DWORD *v5; // edi
  unsigned int v6; // ebp
  int v7; // eax
  int *v8; // esi
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  int v12; // ecx
  Input *v13; // eax
  _DWORD v14[7]; // [esp-8h] [ebp-44h] BYREF
  int v15; // [esp+14h] [ebp-28h]
  int v16; // [esp+18h] [ebp-24h]
  int v17; // [esp+1Ch] [ebp-20h]
  int v18; // [esp+20h] [ebp-1Ch]
  int v19; // [esp+28h] [ebp-14h]
  _DWORD **v20; // [esp+2Ch] [ebp-10h]
  _DWORD *v21; // [esp+30h] [ebp-Ch]
  _DWORD **i; // [esp+34h] [ebp-8h]
  _DWORD *v23; // [esp+38h] [ebp-4h]

  v1 = this + 1;
  v2 = (_DWORD *)*this[2];
  v3 = this + 1;
  v20 = this + 1;
  v23 = v2;
  for ( i = this + 1; ; v3 = i )
  {
    v4 = v1[1];
    if ( !v3 || v3 != v1 )
      _invalid_parameter_noinfo();
    if ( v2 == v4 )
      break;
    if ( !v3 )
      _invalid_parameter_noinfo();
    if ( v2 == v3[1] )
      _invalid_parameter_noinfo();
    v5 = v2 + 4;
    v6 = 0;
    if ( sub_1000CCA2() )
    {
      v19 = 0;
      do
      {
        v7 = v5[1];
        if ( !v7 || v6 >= (v5[2] - v7) / 92 )
          _invalid_parameter_noinfo();
        v8 = (int *)(v19 + v5[1]);
        v9 = Input::Instance(v16);
        v15 = 0;
        v10 = v9;
        v21 = v14;
        std::string::string(v14, v8 + 16);
        v11 = (*(int (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v10 + 108))(
                v10,
                v14[0],
                v14[1],
                v14[2],
                v14[3],
                v14[4],
                v14[5],
                v14[6],
                v15);
        v12 = *v8;
        v15 = v11;
        v13 = (Input *)Input::Instance(v12);
        Input::Bind(v13, v16, v17, v18);
        v19 += 92;
        ++v6;
      }
      while ( v6 < sub_1000CCA2() );
      v1 = v20;
    }
    sub_1001801B();
    v2 = v23;
  }
}
