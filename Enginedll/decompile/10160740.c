/*
 * func-name: ?GenerateNodeMsg@Terrain@@QAEXXZ
 * func-address: 0x10160740
 * callers: 0x10167810
 * callees: 0x1015eca0
 */

void __thiscall Terrain::GenerateNodeMsg(Terrain *this)
{
  int v2; // ecx
  int v3; // eax
  unsigned int i; // ebp
  int v5; // ecx
  int v6; // ecx
  int v7; // edi
  int v8; // ecx
  int v9; // ebx
  int v10; // ecx
  void (__cdecl *v11)(); // ebx
  int v12; // ecx
  int v13; // ecx
  int v14; // ebx
  int v15; // ecx
  void (__cdecl *v16)(); // ebx
  int v17; // ecx
  int v18; // ecx
  int v19; // ebx
  int v20; // ecx
  void (__cdecl *v21)(); // ebx
  int v22; // ecx
  int v23; // ecx
  int v24; // ebx
  int v25; // [esp+4h] [ebp-8h]
  int v26; // [esp+4h] [ebp-8h]
  int v27; // [esp+4h] [ebp-8h]
  int v28; // [esp+4h] [ebp-8h]
  int v29; // [esp+8h] [ebp-4h]
  int v30; // [esp+8h] [ebp-4h]
  int v31; // [esp+8h] [ebp-4h]
  int v32; // [esp+8h] [ebp-4h]

  v2 = *((_DWORD *)this + 299);
  if ( v2 )
    v3 = (*((_DWORD *)this + 300) - v2) >> 2;
  else
    v3 = 0;
  if ( v3 == *((_DWORD *)this + 324) * *((_DWORD *)this + 325) )
  {
    for ( i = 0; ; ++i )
    {
      v5 = *((_DWORD *)this + 299);
      if ( !v5 || i >= (*((_DWORD *)this + 300) - v5) >> 2 )
        break;
      v6 = *((_DWORD *)this + 299);
      v7 = 4 * i;
      v25 = 4 * i + v6;
      if ( !v6 || i >= (*((_DWORD *)this + 300) - v6) >> 2 )
        invalid_parameter_noinfo();
      v8 = *((_DWORD *)this + 299);
      v29 = v7 + v8;
      if ( !v8 || i >= (*((_DWORD *)this + 300) - v8) >> 2 )
        invalid_parameter_noinfo();
      v9 = v7 + *((_DWORD *)this + 299);
      *(_DWORD *)(*(_DWORD *)v9 + 1216) = Terrain::FindNode(
                                            this,
                                            *(_DWORD *)(*(_DWORD *)v29 + 1172),
                                            *(_DWORD *)(*(_DWORD *)v25 + 1176) - 1);
      v10 = *((_DWORD *)this + 299);
      if ( v10 && i < (*((_DWORD *)this + 300) - v10) >> 2 )
      {
        v11 = invalid_parameter_noinfo;
      }
      else
      {
        v11 = invalid_parameter_noinfo;
        invalid_parameter_noinfo();
      }
      v12 = *((_DWORD *)this + 299);
      v30 = v7 + v12;
      if ( !v12 || i >= (*((_DWORD *)this + 300) - v12) >> 2 )
        v11();
      v13 = *((_DWORD *)this + 299);
      v26 = v7 + v13;
      if ( !v13 || i >= (*((_DWORD *)this + 300) - v13) >> 2 )
        v11();
      v14 = v7 + *((_DWORD *)this + 299);
      *(_DWORD *)(*(_DWORD *)v14 + 1220) = Terrain::FindNode(
                                             this,
                                             *(_DWORD *)(*(_DWORD *)v26 + 1172),
                                             *(_DWORD *)(*(_DWORD *)v30 + 1176) + 1);
      v15 = *((_DWORD *)this + 299);
      if ( v15 && i < (*((_DWORD *)this + 300) - v15) >> 2 )
      {
        v16 = invalid_parameter_noinfo;
      }
      else
      {
        v16 = invalid_parameter_noinfo;
        invalid_parameter_noinfo();
      }
      v17 = *((_DWORD *)this + 299);
      v31 = v7 + v17;
      if ( !v17 || i >= (*((_DWORD *)this + 300) - v17) >> 2 )
        v16();
      v18 = *((_DWORD *)this + 299);
      v27 = v7 + v18;
      if ( !v18 || i >= (*((_DWORD *)this + 300) - v18) >> 2 )
        v16();
      v19 = v7 + *((_DWORD *)this + 299);
      *(_DWORD *)(*(_DWORD *)v19 + 1224) = Terrain::FindNode(
                                             this,
                                             *(_DWORD *)(*(_DWORD *)v27 + 1172) - 1,
                                             *(_DWORD *)(*(_DWORD *)v31 + 1176));
      v20 = *((_DWORD *)this + 299);
      if ( v20 && i < (*((_DWORD *)this + 300) - v20) >> 2 )
      {
        v21 = invalid_parameter_noinfo;
      }
      else
      {
        v21 = invalid_parameter_noinfo;
        invalid_parameter_noinfo();
      }
      v22 = *((_DWORD *)this + 299);
      v32 = v7 + v22;
      if ( !v22 || i >= (*((_DWORD *)this + 300) - v22) >> 2 )
        v21();
      v23 = *((_DWORD *)this + 299);
      v28 = v7 + v23;
      if ( !v23 || i >= (*((_DWORD *)this + 300) - v23) >> 2 )
        v21();
      v24 = v7 + *((_DWORD *)this + 299);
      *(_DWORD *)(*(_DWORD *)v24 + 1228) = Terrain::FindNode(
                                             this,
                                             *(_DWORD *)(*(_DWORD *)v28 + 1172) + 1,
                                             *(_DWORD *)(*(_DWORD *)v32 + 1176));
    }
  }
}
