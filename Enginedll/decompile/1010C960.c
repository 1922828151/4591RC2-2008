/*
 * func-name: ?CacheModel@Precacher@@SAPAVModel@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAV?$vector@UAnimInfo@Precacher@@V?$allocator@UAnimInfo@Precacher@@@std@@@4@PAV?$vector@UBoneNodeInfo@Precacher@@V?$allocator@UBoneNodeInfo@Precacher@@@std@@@4@H@Z
 * func-address: 0x1010c960
 * callers: 0x10169700, 0x1016e600
 * callees: 0x1000bc40, 0x100ee930, 0x100ee980, 0x100eeba0, 0x100efd60, 0x100f2ca0, 0x100f5b70, 0x1010c190, 0x1010edb0, 0x1017a0b0, 0x101a2534
 */

Model *__cdecl Precacher::CacheModel(
        char a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        char *a10)
{
  Model *v10; // ebx
  Model *v11; // eax
  Model *v12; // esi
  const char *v13; // eax
  _DWORD *v14; // ebp
  _DWORD *v15; // edi
  char v17; // [esp-28h] [ebp-ACh] BYREF
  int v18; // [esp-24h] [ebp-A8h]
  int v19; // [esp-20h] [ebp-A4h]
  int v20; // [esp-1Ch] [ebp-A0h]
  int v21; // [esp-18h] [ebp-9Ch]
  int v22; // [esp-14h] [ebp-98h]
  int v23; // [esp-10h] [ebp-94h]
  int v24; // [esp-Ch] [ebp-90h]
  int v25; // [esp-8h] [ebp-8Ch]
  char *v26; // [esp-4h] [ebp-88h]
  _DWORD v27[10]; // [esp+10h] [ebp-74h] BYREF
  float v28[16]; // [esp+38h] [ebp-4Ch] BYREF
  int v29; // [esp+80h] [ebp-4h]

  v26 = a10;
  v25 = a9;
  v24 = a8;
  a10 = &v17;
  v10 = 0;
  v29 = 0;
  std::string::string(&v17, &a1);
  Precacher::CacheModelTMP(v17, v18, v19, v20, v21, v22, v23, v24, v25);
  v11 = (Model *)operator new(0x1C8u);
  a10 = (char *)v11;
  LOBYTE(v29) = 1;
  if ( v11 )
    v12 = Model::Model(v11);
  else
    v12 = 0;
  v26 = 0;
  LOBYTE(v29) = 0;
  a10 = (char *)v12;
  v13 = (const char *)std::string::c_str(&a1);
  StaticModel::Load((ModelFrame **)v12, v13, (char)v26);
  if ( *((_DWORD *)v12 + 77) )
  {
    v14 = (_DWORD *)(dword_112414D0 + 4);
    v15 = sub_100F5B70(dword_112414D0, *(_DWORD *)(dword_112414D0 + 4), &a10);
    sub_1010EDB0(1);
    *v14 = v15;
    *(_DWORD *)v15[1] = v15;
    sub_1000BC40(v28);
    (*(void (__thiscall **)(Model *, float *))(*(_DWORD *)v12 + 32))(v12, v28);
    *((_BYTE *)v12 + 313) = 0;
    StaticModel::UpdateWorldBBox(v12);
    StaticModel::GetWorldBBox(v12, v27);
    LOBYTE(v29) = 2;
    StaticModel::SetUserBBox(v12, (const struct BBox *)v27);
    *((_BYTE *)v12 + 315) = 1;
    *((_BYTE *)v12 + 314) = 1;
    LOBYTE(v29) = 0;
    sub_1017A0B0(v27);
    v10 = v12;
  }
  else
  {
    (*(void (__thiscall **)(Model *))(*(_DWORD *)v12 + 16))(v12);
    (*(void (__thiscall **)(Model *, int))(*(_DWORD *)v12 + 12))(v12, 1);
  }
  v29 = -1;
  std::string::~string(&a1);
  return v10;
}
