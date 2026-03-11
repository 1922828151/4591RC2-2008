/*
 * func-name: ?Tick@Prefab@@UAEXXZ
 * func-address: 0x1004e070
 * callers: 0x10116a40, 0x1015d3e0, 0x10169700
 * callees: 0x10001330, 0x1004d160, 0x1004d200, 0x1005f1c0, 0x1007eb80, 0x1007ec70, 0x100ee880, 0x100ee930, 0x10100c20, 0x101046b0, 0x101438a0, 0x10143fd0, 0x1017a0b0
 */

void __usercall Prefab::Tick(Prefab *this@<ecx>, int *a2@<edi>, char *a3@<esi>)
{
  int v4; // eax
  StaticModel *v5; // ecx
  int v6; // eax
  int v7; // eax
  float *WorldBBox; // eax
  int v9; // eax
  unsigned __int16 v10; // ax
  bool v11; // zf
  float v12; // edx
  float v13; // eax
  struct NxPhysics *v14; // eax
  int v15; // eax
  _DWORD *v16; // eax
  int v17; // edx
  int v18; // edx
  int v19; // eax
  struct NxPhysics *v20; // eax
  float v21; // edx
  float v22; // eax
  int (__thiscall *v23)(Prefab *, int *, char *); // edx
  int v24; // eax
  float *v25; // eax
  int v26; // eax
  int v27; // eax
  int *v28; // eax
  int v29; // esi
  int v30; // eax
  Editor *v31; // eax
  double v32; // st7
  int v33; // [esp+10h] [ebp-100h]
  int v34; // [esp+10h] [ebp-100h]
  int v35; // [esp+18h] [ebp-F8h]
  int v36; // [esp+18h] [ebp-F8h]
  int *v37; // [esp+1Ch] [ebp-F4h]
  char *v38; // [esp+20h] [ebp-F0h]
  float v39; // [esp+28h] [ebp-E8h]
  float v40; // [esp+28h] [ebp-E8h]
  float v41; // [esp+28h] [ebp-E8h]
  float v42; // [esp+28h] [ebp-E8h]
  float v43; // [esp+28h] [ebp-E8h]
  float v44[2]; // [esp+2Ch] [ebp-E4h] BYREF
  float v45[4]; // [esp+34h] [ebp-DCh] BYREF
  int v46; // [esp+44h] [ebp-CCh] BYREF
  char v47; // [esp+50h] [ebp-C0h] BYREF
  int v48; // [esp+5Ch] [ebp-B4h]
  int v49; // [esp+60h] [ebp-B0h]
  int v50; // [esp+64h] [ebp-ACh]
  float v51[16]; // [esp+6Ch] [ebp-A4h] BYREF
  _BYTE v52[8]; // [esp+ACh] [ebp-64h] BYREF
  float v53[4]; // [esp+B4h] [ebp-5Ch] BYREF
  _BYTE v54[48]; // [esp+D4h] [ebp-3Ch] BYREF
  int v55; // [esp+10Ch] [ebp-4h]

  v4 = *((_DWORD *)this + 178);
  v38 = a3;
  v39 = GDeltaTime + *((float *)this + 271);
  *((float *)this + 271) = v39;
  if ( *(_BYTE *)(v4 + 724) )
  {
    if ( !*((_BYTE *)this + 1080) )
    {
      v5 = (StaticModel *)*((_DWORD *)this + 179);
      if ( v5 )
      {
        if ( v39 - *((float *)this + 267) > 10.0 && *((_DWORD *)this + 269) != -1 )
        {
          StaticModel::PreDestroy(v5);
          *((_DWORD *)this + 269) = -1;
        }
      }
    }
  }
  if ( *((_BYTE *)Editor::Instance() + 2056) )
    (*(void (__thiscall **)(Prefab *))(*(_DWORD *)this + 24))(this);
  v37 = a2;
  if ( *((_DWORD *)this + 157) == -1 )
  {
    v6 = *((_DWORD *)this + 179);
    if ( v6 )
    {
      *(float *)(v6 + 216) = *(float *)(*((_DWORD *)this + 178) + 776) * *((float *)this + 68);
      v40 = *(float *)(*((_DWORD *)this + 178) + 776) * *((float *)this + 69);
      *(float *)(*((_DWORD *)this + 179) + 212) = v40;
      (*(void (__thiscall **)(_DWORD, char *, char *, int *, char *))(**((_DWORD **)this + 179) + 28))(
        *((_DWORD *)this + 179),
        (char *)this + 868,
        (char *)this + 856,
        a2,
        a3);
      StaticModel::GetWorldBBox(*((_DWORD *)this + 179), v45);
      v7 = (*(int (__thiscall **)(Prefab *))(*(_DWORD *)this + 88))(this);
      if ( v7 != *((_DWORD *)this + 179) )
      {
        WorldBBox = (float *)StaticModel::GetWorldBBox(v7, v53);
        sub_1004D200(v45, WorldBBox);
        sub_1017A0B0(v53);
      }
      v9 = sub_1005F1C0();
      v38 = &v47;
      v37 = &v46;
      v10 = (*(int (__thiscall **)(int, Prefab *, int))(*(_DWORD *)v9 + 4))(v9, this, 1);
      v11 = *((_DWORD *)this + 155) == 0;
      *((_DWORD *)this + 157) = v10;
      if ( v11 && !*((_BYTE *)this + 724) )
      {
        sub_10001330(v51, (char *)this + 868);
        v12 = *((float *)this + 215);
        v13 = *((float *)this + 216);
        v51[12] = *((float *)this + 214);
        v35 = *((_DWORD *)this + 266);
        v51[13] = v12;
        v51[14] = v13;
        v33 = *((_DWORD *)this + 179);
        v14 = NxPhysics::Instance();
        *((_DWORD *)this + 155) = NxPhysics::CreateMeshActor(v14, this, -1, v33, v51, v35);
      }
      v55 = -1;
      sub_1017A0B0(v44);
    }
  }
  if ( *((_BYTE *)Editor::Instance() + 2122) )
  {
    v15 = *((_DWORD *)this + 179);
    if ( v15 )
    {
      *(float *)(v15 + 216) = *(float *)(*((_DWORD *)this + 178) + 776) * *((float *)this + 68);
      v41 = *(float *)(*((_DWORD *)this + 178) + 776) * *((float *)this + 69);
      *(float *)(*((_DWORD *)this + 179) + 212) = v41;
      v16 = (_DWORD *)StaticModel::GetWorldBBox(*((_DWORD *)this + 179), v44);
      *((_DWORD *)this + 193) = v16[1];
      *((_DWORD *)this + 194) = v16[2];
      *((_DWORD *)this + 195) = v16[3];
      *((_DWORD *)this + 196) = v16[4];
      *((_DWORD *)this + 197) = v16[5];
      *((_DWORD *)this + 198) = v16[6];
      v17 = v16[7];
      v16 += 7;
      *((_DWORD *)this + 199) = v17;
      *((_DWORD *)this + 200) = v16[1];
      *((_DWORD *)this + 201) = v16[2];
      sub_1017A0B0(v44);
      if ( !*((_DWORD *)this + 155) && !*((_BYTE *)this + 724) )
      {
        sub_10001330(v44, (char *)this + 868);
        v18 = *((_DWORD *)this + 215);
        v19 = *((_DWORD *)this + 216);
        v48 = *((_DWORD *)this + 214);
        v36 = *((_DWORD *)this + 266);
        v49 = v18;
        v50 = v19;
        v34 = *((_DWORD *)this + 179);
        v20 = NxPhysics::Instance();
        *((_DWORD *)this + 155) = NxPhysics::CreateMeshActor(v20, this, -1, v34, v44, v36);
      }
    }
    v11 = *((_BYTE *)this + 441) == 0;
    v21 = *((float *)this + 215);
    v22 = *((float *)this + 216);
    qmemcpy(v51, (char *)this + 868, sizeof(v51));
    v51[12] = *((float *)this + 214);
    v51[13] = v21;
    v51[14] = v22;
    if ( !v11 && *(_BYTE *)(*((_DWORD *)this + 178) + 748) )
    {
      if ( *((_DWORD *)this + 157) != -1 )
      {
        StaticModel::GetWorldBBox(*((_DWORD *)this + 179), v52);
        v23 = *(int (__thiscall **)(Prefab *, int *, char *))(*(_DWORD *)this + 88);
        v55 = 1;
        v24 = v23(this, v37, v38);
        if ( v24 != *((_DWORD *)this + 179) )
        {
          v25 = (float *)StaticModel::GetWorldBBox(v24, v45);
          sub_1004D200(v53, v25);
          sub_1017A0B0(v45);
        }
        v26 = sub_1005F1C0();
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v26 + 28))(v26, *((unsigned __int16 *)this + 314));
        v27 = *((_DWORD *)this + 178);
        if ( v27 && *((_DWORD *)this + 179) && *(_DWORD *)(v27 + 756) && !sub_1004D160((float *)this + 272, v51) )
          sub_101046B0(this);
        v28 = (int *)*((_DWORD *)this + 155);
        if ( v28 )
        {
          v29 = *v28;
          v30 = NxHelper::ToNxMat34(v54, v51);
          (*(void (__thiscall **)(_DWORD, int))(v29 + 20))(*((_DWORD *)this + 155), v30);
        }
        v55 = -1;
        sub_1017A0B0(v52);
      }
      if ( (unsigned __int8)std::operator!=<char>((char *)this + 280, (char *)this + 444) )
      {
        v31 = Editor::Instance();
        Editor::MakeNameUnique(v31, this);
        std::string::operator=((char *)this + 280, (char *)this + 444);
      }
    }
    qmemcpy((char *)this + 1088, v51, 0x40u);
  }
  if ( *((_BYTE *)this + 824) )
  {
    if ( *((_BYTE *)this + 1052) )
    {
      v42 = *((float *)this + 207) - *((float *)this + 265) * GDeltaTime;
      *((float *)this + 207) = v42;
      if ( *((float *)this + 264) >= (double)v42 )
      {
        v32 = *((float *)this + 264);
        *((_BYTE *)this + 1052) = 0;
        *((float *)this + 207) = v32;
      }
    }
    else
    {
      v43 = *((float *)this + 265) * GDeltaTime + *((float *)this + 207);
      *((float *)this + 207) = v43;
      if ( v43 >= 1.0 )
        *((float *)this + 207) = 1.0;
    }
    *((_BYTE *)this + 824) = *((float *)this + 207) < 0.9999998807907104;
  }
}
