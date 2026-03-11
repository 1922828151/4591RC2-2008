/*
 * func-name: ?SetEditorVars@Material@@QAEXXZ
 * func-address: 0x100e4800
 * callers: 0x100e4db0, 0x100e68a0, 0x100e6ae0
 * callees: 0x10009330, 0x10009450, 0x10009550, 0x1000f820, 0x10012c20, 0x10017220, 0x10017310
 */

void __thiscall Material::SetEditorVars(Material *this)
{
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // eax
  unsigned int v3; // ebp
  int *v4; // edi
  unsigned int v5; // ebx
  struct EditorVar *v6; // eax
  struct EditorVar *v7; // eax
  struct EditorVar *v8; // eax
  struct EditorVar *v9; // eax
  struct EditorVar *v10; // eax
  unsigned int v11; // ebp
  bool v12; // cc
  _DWORD *v13; // ebp
  unsigned int i; // ebp
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  char v20; // [esp-70h] [ebp-14Ch] BYREF
  int v21; // [esp-6Ch] [ebp-148h]
  int v22; // [esp-68h] [ebp-144h]
  int v23; // [esp-64h] [ebp-140h]
  int v24; // [esp-60h] [ebp-13Ch]
  int v25; // [esp-5Ch] [ebp-138h]
  int v26; // [esp-58h] [ebp-134h]
  int v27; // [esp-54h] [ebp-130h]
  char v28; // [esp-50h] [ebp-12Ch] BYREF
  int v29; // [esp-4Ch] [ebp-128h]
  int v30; // [esp-48h] [ebp-124h]
  int v31; // [esp-44h] [ebp-120h]
  int v32; // [esp-40h] [ebp-11Ch]
  int v33; // [esp-3Ch] [ebp-118h]
  int v34; // [esp-38h] [ebp-114h]
  char v35; // [esp-34h] [ebp-110h] BYREF
  int v36; // [esp-30h] [ebp-10Ch]
  int v37; // [esp-2Ch] [ebp-108h]
  int v38; // [esp-28h] [ebp-104h]
  int v39; // [esp-24h] [ebp-100h]
  int v40; // [esp-20h] [ebp-FCh]
  int v41; // [esp-1Ch] [ebp-F8h]
  int v42; // [esp-18h] [ebp-F4h]
  int v43; // [esp-14h] [ebp-F0h]
  char *v44; // [esp+0h] [ebp-DCh]
  char *v45; // [esp+4h] [ebp-D8h]
  _DWORD v46[2]; // [esp+8h] [ebp-D4h] BYREF
  int v47; // [esp+10h] [ebp-CCh] BYREF
  _BYTE v48[28]; // [esp+14h] [ebp-C8h] BYREF
  _BYTE v49[28]; // [esp+30h] [ebp-ACh] BYREF
  _BYTE v50[28]; // [esp+4Ch] [ebp-90h] BYREF
  int v51; // [esp+68h] [ebp-74h]
  char v52; // [esp+6Ch] [ebp-70h]
  char v53; // [esp+6Dh] [ebp-6Fh]
  _DWORD v54[26]; // [esp+70h] [ebp-6Ch] BYREF
  int v55; // [esp+D8h] [ebp-4h]

  v55 = -1;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v54[25] = &loc_101AF1AB;
  v54[24] = ExceptionList;
  v3 = *((_DWORD *)this + 23);
  v4 = (int *)((char *)this + 84);
  if ( *((_DWORD *)this + 22) > v3 )
    invalid_parameter_noinfo();
  v5 = v4[1];
  if ( v5 > v4[2] )
    invalid_parameter_noinfo();
  std::vector<EditorVar>::erase(v4, v46, (int)v4, v5, (int)v4, v3);
  v43 = 0;
  v42 = 1;
  v44 = &v35;
  std::string::string(&v35, &unk_101C6E5A);
  v45 = &v28;
  v55 = 0;
  std::string::string(&v28, "General");
  v27 = (int)this + 332;
  v46[0] = &v20;
  LOBYTE(v55) = 1;
  std::string::string(&v20, "Friction");
  v55 = -1;
  v6 = (struct EditorVar *)EditorVar::EditorVar(
                             v54,
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
                             v35,
                             v36,
                             v37,
                             v38,
                             v39,
                             v40,
                             v41,
                             v42,
                             v43);
  v55 = 2;
  std::vector<EditorVar>::push_back(v4, v6);
  v55 = -1;
  EditorVar::~EditorVar((EditorVar *)v54);
  v43 = 0;
  v42 = 1;
  v46[0] = &v35;
  std::string::string(&v35, &unk_101C6E5B);
  v45 = &v28;
  v55 = 3;
  std::string::string(&v28, "General");
  v27 = (int)this + 336;
  v44 = &v20;
  LOBYTE(v55) = 4;
  std::string::string(&v20, "Restitution");
  v55 = -1;
  v7 = (struct EditorVar *)EditorVar::EditorVar(
                             v54,
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
                             v35,
                             v36,
                             v37,
                             v38,
                             v39,
                             v40,
                             v41,
                             v42,
                             v43);
  v55 = 5;
  std::vector<EditorVar>::push_back(v4, v7);
  v55 = -1;
  EditorVar::~EditorVar((EditorVar *)v54);
  v43 = 0;
  v42 = 1;
  v46[0] = &v35;
  std::string::string(&v35, &unk_101C6E6B);
  v45 = &v28;
  v55 = 6;
  std::string::string(&v28, "General");
  v27 = (int)this + 212;
  v44 = &v20;
  LOBYTE(v55) = 7;
  std::string::string(&v20, "SortingOrder");
  v55 = -1;
  v8 = (struct EditorVar *)EditorVar::EditorVar(
                             v54,
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
                             v35,
                             v36,
                             v37,
                             v38,
                             v39,
                             v40,
                             v41,
                             v42,
                             v43);
  v55 = 8;
  std::vector<EditorVar>::push_back(v4, v8);
  v55 = -1;
  EditorVar::~EditorVar((EditorVar *)v54);
  v43 = 0;
  v42 = 1;
  v46[0] = &v35;
  std::string::string(&v35, &unk_101C6E8D);
  v45 = &v28;
  v55 = 9;
  std::string::string(&v28, "General");
  v27 = (int)this + 144;
  v44 = &v20;
  LOBYTE(v55) = 10;
  std::string::string(&v20, "Collidable");
  v55 = -1;
  v9 = (struct EditorVar *)EditorVar::EditorVar(
                             v54,
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
                             v35,
                             v36,
                             v37,
                             v38,
                             v39,
                             v40,
                             v41,
                             v42,
                             v43);
  v55 = 11;
  std::vector<EditorVar>::push_back(v4, v9);
  v55 = -1;
  EditorVar::~EditorVar((EditorVar *)v54);
  v43 = 0;
  v42 = 1;
  v46[0] = &v35;
  std::string::string(&v35, &unk_101C6E8E);
  v45 = &v28;
  v55 = 12;
  std::string::string(&v28, "General");
  LOBYTE(v55) = 13;
  v27 = (int)this + 156;
  v44 = &v20;
  std::string::string(&v20, "Shader");
  v55 = -1;
  v10 = (struct EditorVar *)EditorVar::EditorVar(
                              v54,
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
                              v35,
                              v36,
                              v37,
                              v38,
                              v39,
                              v40,
                              v41,
                              v42,
                              v43);
  v55 = 14;
  std::vector<EditorVar>::push_back(v4, v10);
  v55 = -1;
  EditorVar::~EditorVar((EditorVar *)v54);
  v11 = v4[2];
  if ( v4[1] > v11 )
    invalid_parameter_noinfo();
  v12 = v11 - 96 <= v4[2];
  v46[1] = v11;
  if ( !v12 || v11 - 96 < v4[1] )
    invalid_parameter_noinfo();
  v13 = (_DWORD *)(v11 - 96);
  if ( (unsigned int)v13 >= v4[2] )
    invalid_parameter_noinfo();
  *v13 = 8;
  for ( i = 0; ; ++i )
  {
    v15 = *((_DWORD *)this + 70);
    if ( !v15 || i >= (*((_DWORD *)this + 71) - v15) >> 2 )
      break;
    *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 70) + 4 * i) + 68) = 0;
    std::string::string(v48);
    v55 = 15;
    std::string::string(v49);
    LOBYTE(v55) = 16;
    std::string::string(v50);
    v52 = 1;
    v53 = 0;
    v16 = *((_DWORD *)this + 70);
    v55 = 17;
    if ( !v16 || i >= (*((_DWORD *)this + 71) - v16) >> 2 )
      invalid_parameter_noinfo();
    std::string::operator=(v48, *(_DWORD *)(*((_DWORD *)this + 70) + 4 * i) + 4);
    v17 = *((_DWORD *)this + 70);
    if ( !v17 || i >= (*((_DWORD *)this + 71) - v17) >> 2 )
      invalid_parameter_noinfo();
    v18 = *((_DWORD *)this + 70);
    v47 = **(_DWORD **)(v18 + 4 * i);
    if ( !v18 || i >= (*((_DWORD *)this + 71) - v18) >> 2 )
      invalid_parameter_noinfo();
    v19 = *((_DWORD *)this + 70);
    v51 = *(_DWORD *)(*(_DWORD *)(v19 + 4 * i) + 60);
    if ( !v19 || i >= (*((_DWORD *)this + 71) - v19) >> 2 )
      invalid_parameter_noinfo();
    std::string::operator=(v49, *(_DWORD *)(*((_DWORD *)this + 70) + 4 * i) + 32);
    std::string::operator=(v50, "Shader Parameters");
    std::vector<EditorVar>::push_back(v4, (struct EditorVar *)&v47);
    v55 = 19;
    std::string::~string(v50);
    LOBYTE(v55) = 18;
    std::string::~string(v49);
    v55 = -1;
    std::string::~string(v48);
  }
}
