/*
 * func-name: ?RebuildMaterialBlock@Terrain@@QAEXXZ
 * func-address: 0x10168a40
 * callers: 0x10168ec0, 0x10169020, 0x10169640
 * callees: 0x1005dad0, 0x1009dd90, 0x100e4400, 0x100e6830, 0x1015fb30, 0x10161790, 0x1016b0d0, 0x1016c020
 */

void __usercall Terrain::RebuildMaterialBlock(Terrain *this@<ecx>, int a2@<edi>, int a3@<esi>)
{
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // eax
  unsigned int v5; // ebx
  int *v6; // edi
  unsigned int v7; // ebp
  unsigned int v8; // ecx
  _DWORD *v9; // edi
  int v10; // edx
  unsigned int v11; // ebp
  int v12; // ebx
  _DWORD *v13; // ebx
  int v14; // eax
  unsigned int i; // ebp
  int v16; // ecx
  int v17; // ebx
  struct Mesh *Mesh; // eax
  Material *v19; // eax
  int v20; // ecx
  Material *v21; // edi
  struct Mesh *v22; // eax
  int v23; // ecx
  struct Mesh *v24; // edi
  int v25; // eax
  char *v26; // edi
  int v27; // ecx
  struct Mesh *v28; // edi
  int v29; // eax
  char *v30; // edi
  Material *v31; // ecx
  int v32; // ecx
  struct Mesh *v33; // eax
  int v34; // ecx
  struct Mesh *v35; // edi
  int v36; // eax
  char *v37; // edi
  int v38; // ecx
  struct Mesh *v39; // edi
  int v40; // eax
  char *v41; // edi
  Material *v44; // [esp+Ch] [ebp-4Ch]
  Material *v45[2]; // [esp+10h] [ebp-48h] BYREF
  _DWORD v46[8]; // [esp+18h] [ebp-40h] BYREF
  int v47; // [esp+38h] [ebp-20h] BYREF
  unsigned int v48; // [esp+3Ch] [ebp-1Ch]
  _DWORD *v49; // [esp+40h] [ebp-18h]
  int v50; // [esp+44h] [ebp-14h]
  int v51; // [esp+48h] [ebp-10h]
  struct _EXCEPTION_REGISTRATION_RECORD *v52; // [esp+4Ch] [ebp-Ch]
  void *v53; // [esp+50h] [ebp-8h]
  int v54; // [esp+54h] [ebp-4h]

  v54 = -1;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v53 = &loc_101B652D;
  v52 = ExceptionList;
  v5 = *((_DWORD *)this + 308);
  v6 = (int *)((char *)this + 1224);
  if ( *((_DWORD *)this + 307) > v5 )
    invalid_parameter_noinfo();
  v7 = v6[1];
  if ( v7 > v6[2] )
    invalid_parameter_noinfo();
  sub_1005DAD0(v6, v45, (int)v6, v7, (int)v6, v5);
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v46[0] = &MatBlock::`vftable';
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v46[1] = 0;
  v46[7] = 0;
  v46[6] = 0;
  v51 = 0;
  v54 = 0;
  v11 = 0;
  while ( 1 )
  {
    v12 = *((_DWORD *)this + 299);
    if ( !v12 || v11 >= (*((_DWORD *)this + 300) - v12) >> 2 )
      break;
    v13 = (_DWORD *)(*((_DWORD *)this + 299) + 4 * v11);
    if ( v8 && (int)((int)v9 - v8) >> 2 < (unsigned int)((int)(v10 - v8) >> 2) )
    {
      *v9 = *v13;
      v10 = v50;
      v8 = v48;
      ++v9;
      ++v11;
      v49 = v9;
    }
    else
    {
      if ( v8 > (unsigned int)v9 )
        invalid_parameter_noinfo();
      sub_1016B0D0((int)v45, (int)&v47, v9, (int)v13);
      v9 = v49;
      v10 = v50;
      v8 = v48;
      ++v11;
    }
  }
  sub_1016C020((int)this + 1224, v46);
  v14 = *((_DWORD *)this + 307);
  if ( !v14 || !((*((_DWORD *)this + 308) - v14) / 52) )
    invalid_parameter_noinfo();
  sub_1015FB30(*((_DWORD *)this + 307), (int)this);
  for ( i = 0; ; ++i )
  {
    v16 = *((_DWORD *)this + 299);
    if ( !v16 || i >= (*((_DWORD *)this + 300) - v16) >> 2 )
      break;
    v17 = 4 * i;
    Mesh = ModelFrame::GetMesh(
             *(ModelFrame **)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 299) + 4 * i) + 716) + 308),
             0);
    v19 = (Material *)(*(int (__thiscall **)(struct Mesh *, _DWORD, int, int))(*(_DWORD *)Mesh + 108))(Mesh, 0, a2, a3);
    v20 = *((_DWORD *)this + 299);
    v21 = v19;
    v45[1] = v19;
    if ( !v20 || i >= (*((_DWORD *)this + 300) - v20) >> 2 )
      invalid_parameter_noinfo();
    v22 = ModelFrame::GetMesh(
            *(ModelFrame **)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 299) + 4 * i) + 716) + 308),
            0);
    a3 = 0;
    if ( v21 != (Material *)(*(int (__thiscall **)(struct Mesh *))(*(_DWORD *)v22 + 108))(v22) )
    {
      v23 = *((_DWORD *)this + 299);
      if ( !v23 || i >= (*((_DWORD *)this + 300) - v23) >> 2 )
        invalid_parameter_noinfo();
      v24 = ModelFrame::GetMesh(
              *(ModelFrame **)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 299) + 4 * i) + 716) + 308),
              0);
      v25 = *((_DWORD *)v24 + 616);
      v26 = (char *)v24 + 2460;
      if ( !v25 || !((*((_DWORD *)v26 + 2) - v25) >> 2) )
        invalid_parameter_noinfo();
      Material::Release(**((Material ***)v26 + 1));
      v27 = *((_DWORD *)this + 299);
      if ( !v27 || i >= (*((_DWORD *)this + 300) - v27) >> 2 )
        invalid_parameter_noinfo();
      v28 = ModelFrame::GetMesh(
              *(ModelFrame **)(*(_DWORD *)(*(_DWORD *)(v17 + *((_DWORD *)this + 299)) + 716) + 308),
              0);
      v29 = *((_DWORD *)v28 + 616);
      v30 = (char *)v28 + 2460;
      if ( !v29 || !((*((_DWORD *)v30 + 2) - v29) >> 2) )
        invalid_parameter_noinfo();
      v31 = v45[0];
      **((Material ***)v30 + 1) = v45[0];
      Material::AddRef(v31);
      v21 = v45[0];
    }
    v32 = *((_DWORD *)this + 299);
    if ( !v32 || i >= (*((_DWORD *)this + 300) - v32) >> 2 )
      invalid_parameter_noinfo();
    v33 = ModelFrame::GetMesh(
            *(ModelFrame **)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 299) + 4 * i) + 716) + 308),
            1u);
    a2 = 0;
    if ( v21 != (Material *)(*(int (__thiscall **)(struct Mesh *))(*(_DWORD *)v33 + 108))(v33) )
    {
      v34 = *((_DWORD *)this + 299);
      if ( !v34 || i >= (*((_DWORD *)this + 300) - v34) >> 2 )
        invalid_parameter_noinfo();
      v35 = ModelFrame::GetMesh(
              *(ModelFrame **)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 299) + 4 * i) + 716) + 308),
              1u);
      v36 = *((_DWORD *)v35 + 616);
      v37 = (char *)v35 + 2460;
      if ( !v36 || !((*((_DWORD *)v37 + 2) - v36) >> 2) )
        invalid_parameter_noinfo();
      Material::Release(**((Material ***)v37 + 1));
      v38 = *((_DWORD *)this + 299);
      if ( !v38 || i >= (*((_DWORD *)this + 300) - v38) >> 2 )
        invalid_parameter_noinfo();
      v39 = ModelFrame::GetMesh(
              *(ModelFrame **)(*(_DWORD *)(*(_DWORD *)(v17 + *((_DWORD *)this + 299)) + 716) + 308),
              1u);
      v40 = *((_DWORD *)v39 + 616);
      v41 = (char *)v39 + 2460;
      if ( !v40 || !((*((_DWORD *)v41 + 2) - v40) >> 2) )
        invalid_parameter_noinfo();
      **((_DWORD **)v41 + 1) = v44;
      Material::AddRef(v44);
    }
  }
  sub_10161790(v46);
}
