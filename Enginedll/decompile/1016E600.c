/*
 * func-name: ??0TextureCamera@@QAE@PAVWorld@@@Z
 * func-address: 0x1016e600
 * callers: 0x100a7820, 0x100b2080, 0x100b41c0, 0x1016eb70
 * callees: 0x10009330, 0x10009450, 0x10009550, 0x10012c20, 0x10017310, 0x100174f0, 0x10050b80, 0x10063b20, 0x1007ec70, 0x1010c960, 0x10118b80, 0x1013a9b0, 0x1016db80, 0x10178340
 */

TextureCamera *__thiscall TextureCamera::TextureCamera(TextureCamera *this, struct World *a2)
{
  int v3; // eax
  struct EditorVar *v4; // eax
  struct EditorVar *v5; // eax
  struct EditorVar *v6; // eax
  struct EditorVar *v7; // eax
  struct EditorVar *v8; // eax
  struct EditorVar *v9; // eax
  int *v10; // eax
  char v12; // [esp-40h] [ebp-108h] BYREF
  int v13; // [esp-3Ch] [ebp-104h]
  int v14; // [esp-38h] [ebp-100h]
  int v15; // [esp-34h] [ebp-FCh]
  int v16; // [esp-30h] [ebp-F8h]
  int v17; // [esp-2Ch] [ebp-F4h]
  int v18; // [esp-28h] [ebp-F0h]
  int v19; // [esp-24h] [ebp-ECh]
  char v20; // [esp-20h] [ebp-E8h] BYREF
  int v21; // [esp-1Ch] [ebp-E4h]
  int v22; // [esp-18h] [ebp-E0h]
  int v23; // [esp-14h] [ebp-DCh]
  int v24; // [esp-10h] [ebp-D8h]
  int v25; // [esp-Ch] [ebp-D4h]
  int v26; // [esp-8h] [ebp-D0h] BYREF
  int v27; // [esp-4h] [ebp-CCh] BYREF
  int v28; // [esp+0h] [ebp-C8h]
  int v29; // [esp+4h] [ebp-C4h]
  int v30; // [esp+8h] [ebp-C0h]
  int v31; // [esp+Ch] [ebp-BCh]
  int v32; // [esp+10h] [ebp-B8h]
  int v33; // [esp+14h] [ebp-B4h]
  int v34; // [esp+18h] [ebp-B0h]
  int v35; // [esp+1Ch] [ebp-ACh]
  int *v36; // [esp+30h] [ebp-98h]
  int *v37; // [esp+34h] [ebp-94h]
  char *v38; // [esp+38h] [ebp-90h]
  int v39; // [esp+3Ch] [ebp-8Ch]
  int v40; // [esp+40h] [ebp-88h]
  int v41; // [esp+44h] [ebp-84h]
  int v42; // [esp+48h] [ebp-80h]
  TextureCamera *v43; // [esp+4Ch] [ebp-7Ch]
  _DWORD v44[24]; // [esp+50h] [ebp-78h] BYREF
  _BYTE v45[12]; // [esp+B0h] [ebp-18h] BYREF
  int v46; // [esp+C4h] [ebp-4h]

  v43 = this;
  Actor::Actor(this, a2);
  v46 = 0;
  *(_DWORD *)this = &TextureCamera::`vftable';
  RenderBase::RenderBase((TextureCamera *)((char *)this + 1056));
  *((_DWORD *)this + 264) = &TCameraFrame::`vftable';
  *((_DWORD *)this + 268) = 0;
  *((_DWORD *)this + 269) = 0;
  *((_DWORD *)this + 270) = 0;
  *((_DWORD *)this + 271) = 0;
  *((_DWORD *)this + 267) = 0;
  Camera::Camera((TextureCamera *)((char *)this + 1088));
  *((float *)this + 377) = 0.0;
  *((float *)this + 378) = 0.0;
  *((float *)this + 379) = 0.0;
  *((float *)this + 380) = 0.0;
  std::string::string((char *)this + 1532);
  std::string::string((char *)this + 1560);
  World::World((TextureCamera *)((char *)this + 1608));
  LOBYTE(v46) = 5;
  if ( *((_BYTE *)Editor::Instance() + 2056) )
  {
    v35 = 1;
    v34 = 0;
    v33 = 0;
    v36 = &v26;
    std::string::string(&v26, "Arrow.xml");
    *((_DWORD *)this + 179) = Precacher::CacheModel(v26, v27, v28, v29, v30, v31, v32, v33, v34, (char *)v35);
  }
  else
  {
    *((_DWORD *)this + 179) = 0;
  }
  v3 = *((_DWORD *)this + 178);
  *((_BYTE *)this + 724) = 1;
  *((_BYTE *)this + 5404) = 1;
  *((_DWORD *)this + 397) = 0;
  if ( v3 && *(_BYTE *)(v3 + 80) || *((_BYTE *)Editor::Instance() + 2056) )
  {
    v35 = 0;
    v34 = 1;
    v36 = &v27;
    std::string::string(&v27, &unk_101CE47F);
    v38 = &v20;
    LOBYTE(v46) = 6;
    std::string::string(&v20, &unk_101CE48E);
    v19 = (int)this + 1604;
    v37 = (int *)&v12;
    LOBYTE(v46) = 7;
    std::string::string(&v12, &unk_101CE638);
    LOBYTE(v46) = 5;
    v4 = (struct EditorVar *)EditorVar::EditorVar(
                               v44,
                               v12,
                               v13,
                               v14,
                               v15,
                               v16,
                               v17,
                               v18,
                               v19,
                               v20,
                               v21,
                               v22,
                               v23,
                               v24,
                               v25,
                               v26,
                               v27,
                               v28,
                               v29,
                               v30,
                               v31,
                               v32,
                               v33,
                               v34,
                               v35);
    LOBYTE(v46) = 8;
    std::vector<EditorVar>::push_back((_DWORD *)this + 106, v4);
    LOBYTE(v46) = 5;
    EditorVar::~EditorVar((EditorVar *)v44);
    v35 = 0;
    v34 = 1;
    v37 = &v27;
    std::string::string(&v27, &unk_101CE48F);
    v38 = &v20;
    LOBYTE(v46) = 9;
    std::string::string(&v20, &unk_101CE4DF);
    v19 = (int)this + 1508;
    v36 = (int *)&v12;
    LOBYTE(v46) = 10;
    std::string::string(&v12, &unk_101CE640);
    LOBYTE(v46) = 5;
    v5 = (struct EditorVar *)EditorVar::EditorVar(
                               v44,
                               v12,
                               v13,
                               v14,
                               v15,
                               v16,
                               v17,
                               v18,
                               v19,
                               v20,
                               v21,
                               v22,
                               v23,
                               v24,
                               v25,
                               v26,
                               v27,
                               v28,
                               v29,
                               v30,
                               v31,
                               v32,
                               v33,
                               v34,
                               v35);
    LOBYTE(v46) = 11;
    std::vector<EditorVar>::push_back((_DWORD *)this + 106, v5);
    LOBYTE(v46) = 5;
    EditorVar::~EditorVar((EditorVar *)v44);
    v35 = 0;
    v34 = 1;
    v37 = &v27;
    std::string::string(&v27, &unk_101CE51D);
    v38 = &v20;
    LOBYTE(v46) = 12;
    std::string::string(&v20, &unk_101CE51E);
    v19 = (int)this + 1528;
    v36 = (int *)&v12;
    LOBYTE(v46) = 13;
    std::string::string(&v12, &unk_101CE648);
    LOBYTE(v46) = 5;
    v6 = (struct EditorVar *)EditorVar::EditorVar(
                               v44,
                               v12,
                               v13,
                               v14,
                               v15,
                               v16,
                               v17,
                               v18,
                               v19,
                               v20,
                               v21,
                               v22,
                               v23,
                               v24,
                               v25,
                               v26,
                               v27,
                               v28,
                               v29,
                               v30,
                               v31,
                               v32,
                               v33,
                               v34,
                               v35);
    LOBYTE(v46) = 14;
    std::vector<EditorVar>::push_back((_DWORD *)this + 106, v6);
    LOBYTE(v46) = 5;
    EditorVar::~EditorVar((EditorVar *)v44);
    v35 = 0;
    v34 = 1;
    v37 = &v27;
    std::string::string(&v27, &unk_101CE51F);
    v38 = &v20;
    LOBYTE(v46) = 15;
    std::string::string(&v20, &unk_101CE573);
    v19 = (int)this + 1532;
    v36 = (int *)&v12;
    LOBYTE(v46) = 16;
    std::string::string(&v12, &unk_101CE654);
    LOBYTE(v46) = 5;
    v7 = (struct EditorVar *)EditorVar::EditorVar(
                               v44,
                               v12,
                               v13,
                               v14,
                               v15,
                               v16,
                               v17,
                               v18,
                               v19,
                               v20,
                               v21,
                               v22,
                               v23,
                               v24,
                               v25,
                               v26,
                               v27,
                               v28,
                               v29,
                               v30,
                               v31,
                               v32,
                               v33,
                               v34,
                               v35);
    LOBYTE(v46) = 17;
    std::vector<EditorVar>::push_back((_DWORD *)this + 106, v7);
    LOBYTE(v46) = 5;
    EditorVar::~EditorVar((EditorVar *)v44);
    v35 = 0;
    v34 = 1;
    v37 = &v27;
    std::string::string(&v27, &unk_101CE660);
    v38 = &v20;
    LOBYTE(v46) = 18;
    std::string::string(&v20, &unk_101CE57E);
    v19 = (int)this + 1596;
    v36 = (int *)&v12;
    LOBYTE(v46) = 19;
    std::string::string(&v12, &unk_101CE678);
    LOBYTE(v46) = 5;
    v8 = (struct EditorVar *)EditorVar::EditorVar(
                               v44,
                               v12,
                               v13,
                               v14,
                               v15,
                               v16,
                               v17,
                               v18,
                               v19,
                               v20,
                               v21,
                               v22,
                               v23,
                               v24,
                               v25,
                               v26,
                               v27,
                               v28,
                               v29,
                               v30,
                               v31,
                               v32,
                               v33,
                               v34,
                               v35);
    LOBYTE(v46) = 20;
    std::vector<EditorVar>::push_back((_DWORD *)this + 106, v8);
    LOBYTE(v46) = 5;
    EditorVar::~EditorVar((EditorVar *)v44);
    v35 = 0;
    v34 = 1;
    v37 = &v27;
    std::string::string(&v27, &unk_101CE57F);
    v38 = &v20;
    LOBYTE(v46) = 21;
    std::string::string(&v20, "Debug");
    v19 = (int)this + 5404;
    v36 = (int *)&v12;
    LOBYTE(v46) = 22;
    std::string::string(&v12, &unk_101CE68C);
    LOBYTE(v46) = 5;
    v9 = (struct EditorVar *)EditorVar::EditorVar(
                               v44,
                               v12,
                               v13,
                               v14,
                               v15,
                               v16,
                               v17,
                               v18,
                               v19,
                               v20,
                               v21,
                               v22,
                               v23,
                               v24,
                               v25,
                               v26,
                               v27,
                               v28,
                               v29,
                               v30,
                               v31,
                               v32,
                               v33,
                               v34,
                               v35);
    LOBYTE(v46) = 23;
    std::vector<EditorVar>::push_back((_DWORD *)this + 106, v9);
    LOBYTE(v46) = 5;
    EditorVar::~EditorVar((EditorVar *)v44);
  }
  *(float *)&v39 = 0.0;
  *(float *)&v40 = 0.0;
  *(float *)&v41 = 0.0;
  *(float *)&v42 = 0.0;
  v10 = (int *)sub_10178340(v45);
  TextureCamera::Init(
    (int)this,
    *((_DWORD *)this + 214),
    *((_DWORD *)this + 215),
    *((_DWORD *)this + 216),
    *v10,
    v10[1],
    v10[2],
    90.0,
    1,
    v39,
    v40,
    v41,
    v42,
    3.4028235e38,
    0);
  return this;
}
