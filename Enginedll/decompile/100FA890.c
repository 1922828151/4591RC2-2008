/*
 * func-name: sub_100FA890
 * func-address: 0x100fa890
 * callers: 0x100fb650
 * callees: 0x10076ef0, 0x100f96b0, 0x100ff780, 0x101a2500
 */

void __thiscall sub_100FA890(_DWORD *this, int *a2, int *a3, _DWORD *a4, _DWORD *a5, int a6)
{
  _DWORD *v7; // ecx
  int *v8; // ebx
  unsigned int v9; // ebp
  int v10; // ecx
  int v11; // eax
  unsigned int v12; // esi
  _DWORD *v13; // edx
  int v14; // eax
  int v15; // [esp+10h] [ebp-1Ch] BYREF
  void *v16; // [esp+14h] [ebp-18h]
  int v17; // [esp+18h] [ebp-14h]
  int v18; // [esp+1Ch] [ebp-10h]
  int v19; // [esp+28h] [ebp-4h]

  v7 = a5;
  *a4 = 0;
  *v7 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v8 = a3;
  v19 = 0;
  v9 = 0;
  if ( std::vector<Model *>::size(a3) )
  {
    do
    {
      v10 = v8[1];
      if ( !v10 || v9 >= (v8[2] - v10) >> 2 )
        invalid_parameter_noinfo();
      v11 = this[6];
      v12 = *(_DWORD *)(v8[1] + 4 * v9);
      if ( !v11 || v12 >= (this[7] - v11) / 60 )
        invalid_parameter_noinfo();
      a3 = (int *)(this[6] + 60 * v12);
      if ( a3 != a2 && sub_100F96B0(this, a2, a3, a6) )
        sub_100FF780((int)&v15, (int)&a3);
      ++v9;
    }
    while ( v9 < std::vector<Model *>::size(v8) );
    v13 = v16;
    if ( v16 )
    {
      v14 = v17;
      if ( (v17 - (int)v16) >> 2 )
        *a4 = *(_DWORD *)v16;
      if ( (unsigned int)((v14 - (int)v13) >> 2) > 1 )
        *a5 = v13[1];
      operator delete(v13);
    }
  }
}
