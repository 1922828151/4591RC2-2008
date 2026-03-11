/*
 * func-name: sub_10047270
 * func-address: 0x10047270
 * callers: 0x100477a0
 * callees: 0x1000bc40, 0x10040990, 0x10041980, 0x10043960, 0x10044cf0, 0x10045740, 0x10049250, 0x100492d0, 0x10049860, 0x10049a00, 0x1004a5e0, 0x100f2ca0, 0x101a2534
 */

void __thiscall sub_10047270(void *this, float *a2)
{
  __int16 (__thiscall *v2)(float *); // edx
  int v3; // ebp
  XMLSystem *v4; // esi
  int Name; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  double v10; // st7
  int v11; // edi
  int v12; // eax
  int v13; // eax
  int v14; // edi
  unsigned int v15; // ebp
  int (__thiscall *v16)(int); // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  struct xercesc_2_5::DOMNode *v20; // eax
  double Float; // st7
  float *v22; // ebx
  int v23; // edi
  int (__thiscall *v24)(int, const wchar_t *); // eax
  int v25; // eax
  float *Vector; // eax
  int (__thiscall *v27)(int, const wchar_t *); // edx
  int v28; // eax
  float *v29; // eax
  int (__thiscall *v30)(int, const wchar_t *); // eax
  int v31; // eax
  float *v32; // eax
  int (__thiscall *v33)(int, const wchar_t *); // edx
  int v34; // eax
  float *v35; // eax
  Model *v36; // eax
  struct ModelFrame **v37; // esi
  char v38; // [esp-10h] [ebp-14Ch] BYREF
  int v39; // [esp-Ch] [ebp-148h]
  int v40; // [esp-8h] [ebp-144h]
  int v41; // [esp-4h] [ebp-140h]
  int v42; // [esp+0h] [ebp-13Ch]
  int v43; // [esp+4h] [ebp-138h]
  unsigned int v44; // [esp+8h] [ebp-134h]
  char v45; // [esp+1Fh] [ebp-11Dh]
  int v46; // [esp+20h] [ebp-11Ch] BYREF
  int FirstNode; // [esp+24h] [ebp-118h]
  float v48; // [esp+28h] [ebp-114h]
  struct ModelFrame *v49; // [esp+2Ch] [ebp-110h] BYREF
  int v50; // [esp+30h] [ebp-10Ch]
  float v51[16]; // [esp+34h] [ebp-108h] BYREF
  _BYTE v52[28]; // [esp+74h] [ebp-C8h] BYREF
  char v53[12]; // [esp+90h] [ebp-ACh] BYREF
  char v54[12]; // [esp+9Ch] [ebp-A0h] BYREF
  char v55[12]; // [esp+A8h] [ebp-94h] BYREF
  char v56[12]; // [esp+B4h] [ebp-88h] BYREF
  _BYTE v57[28]; // [esp+C0h] [ebp-7Ch] BYREF
  _BYTE v58[28]; // [esp+DCh] [ebp-60h] BYREF
  _BYTE v59[28]; // [esp+F8h] [ebp-44h] BYREF
  _DWORD v60[7]; // [esp+114h] [ebp-28h] BYREF
  int v61; // [esp+138h] [ebp-4h]

  v2 = *(__int16 (__thiscall **)(float *))(*(_DWORD *)a2 + 12);
  v3 = (int)this;
  v46 = (int)this;
  if ( v2(a2) == 1 )
  {
    v4 = (XMLSystem *)(v3 + 84);
    Name = XMLSystem::GetName(v60, a2);
    v61 = 0;
    v45 = std::operator==<char>(Name, "SceneInfo");
    v61 = -1;
    std::string::~string(v60);
    if ( v45 )
    {
      sub_10041980(v3, (int)a2, (World **)(v3 + 176));
    }
    else
    {
      v6 = XMLSystem::GetName(v57, a2);
      v61 = 1;
      v45 = std::operator==<char>(v6, "MaterialList");
      v61 = -1;
      std::string::~string(v57);
      if ( v45 )
      {
        sub_10040990((int *)v3, (int)a2, (_DWORD *)(v3 + 28));
      }
      else
      {
        v7 = XMLSystem::GetName(v59, a2);
        v61 = 2;
        v45 = std::operator==<char>(v7, "SelectionList");
        v61 = -1;
        std::string::~string(v59);
        v44 = (unsigned int)a2;
        if ( v45 )
        {
          sub_10043960((_DWORD *)v3, v44);
        }
        else
        {
          v8 = XMLSystem::GetName(v58, v44);
          v61 = 3;
          v45 = std::operator==<char>(v8, "Node");
          v61 = -1;
          std::string::~string(v58);
          if ( v45 )
          {
            if ( *(_DWORD *)(v3 + 176) )
            {
              v46 = 0;
              sub_10045740((int *)v3, a2, &v46);
            }
            else if ( !*(_DWORD *)(*(_DWORD *)(v3 + 180) + 308) )
            {
              FirstNode = (int)&v38;
              v49 = 0;
              std::string::string(&v38, "CollisionModel");
              FirstNode = XMLSystem::FindFirstNode(a2, v38, v39, v40, v41, v42, v43, v44);
              if ( sub_10044CF0((ILoad *)v3, *(struct StaticModel **)(v3 + 180), a2, &v49, 1) )
              {
                v9 = *(_DWORD *)(v3 + 180);
                *(_DWORD *)(v9 + 308) = v49;
                v48 = *((float *)v49 + 92);
                v10 = v48;
                v48 = COERCE_FLOAT(&v38);
                *(float *)(v9 + 52) = v10;
                v50 = v9;
                std::string::string(&v38, "CustomProperties");
                v11 = XMLSystem::FindFirstNode(a2, v38, v39, v40, v41, v42, v43, v44);
                if ( v11 )
                {
                  v48 = COERCE_FLOAT(&v38);
                  std::string::string(&v38, "Actor");
                  v12 = XMLSystem::FindFirstNode(v11, v38, v39, v40, v41, v42, v43, v44);
                  if ( v12 )
                  {
                    v13 = (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v12 + 168))(v12, L"Param");
                    v14 = v13;
                    if ( v13 )
                    {
                      v15 = 0;
                      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 8))(v13) )
                      {
                        do
                        {
                          v16 = *(int (__thiscall **)(int))(*(_DWORD *)v14 + 4);
                          v44 = v15;
                          v17 = v16(v14);
                          v18 = (*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)v17 + 164))(
                                  v17,
                                  L"Name",
                                  0);
                          XMLSystem::GetString(v52, v18, v44);
                          v61 = 4;
                          if ( (unsigned __int8)std::operator==<char>(v52, "LODRatio") )
                          {
                            v19 = (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)v14 + 4))(v14, v15);
                            v20 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v19 + 164))(
                                                                   v19,
                                                                   L"Value");
                            if ( v20 )
                            {
                              Float = XMLSystem::GetFloat(v4, v20, 0);
                              *(float *)(v50 + 212) = Float;
                            }
                          }
                          v61 = -1;
                          std::string::~string(v52);
                          ++v15;
                        }
                        while ( v15 < (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 8))(v14) );
                      }
                      v3 = v46;
                    }
                  }
                }
                v22 = (float *)FirstNode;
                if ( FirstNode )
                {
                  FirstNode = (int)&v38;
                  std::string::string(&v38, "RelativeTransform");
                  v23 = XMLSystem::FindFirstNode(v22, v38, v39, v40, v41, v42, v43, v44);
                  sub_1000BC40(v51);
                  v24 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v23 + 164);
                  v44 = 0;
                  v25 = v24(v23, L"Row0");
                  Vector = (float *)XMLSystem::GetVector(v4, v54, v25, v44);
                  v51[0] = *Vector;
                  v51[1] = Vector[1];
                  v51[2] = Vector[2];
                  v27 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v23 + 164);
                  v44 = 0;
                  v28 = v27(v23, L"Row1");
                  v29 = (float *)XMLSystem::GetVector(v4, v53, v28, v44);
                  v51[4] = *v29;
                  v51[5] = v29[1];
                  v51[6] = v29[2];
                  v30 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v23 + 164);
                  v44 = 0;
                  v31 = v30(v23, L"Row2");
                  v32 = (float *)XMLSystem::GetVector(v4, v55, v31, v44);
                  v51[8] = *v32;
                  v51[9] = v32[1];
                  v51[10] = v32[2];
                  v33 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v23 + 164);
                  v44 = 0;
                  v34 = v33(v23, L"Row3");
                  v35 = (float *)XMLSystem::GetVector(v4, v56, v34, v44);
                  v51[12] = *v35;
                  v51[13] = v35[1];
                  v51[14] = v35[2];
                  v44 = 456;
                  qmemcpy((void *)(v50 + 148), v51, 0x40u);
                  v36 = (Model *)operator new(v44);
                  FirstNode = (int)v36;
                  v61 = 5;
                  if ( v36 )
                    v37 = (struct ModelFrame **)Model::Model(v36);
                  else
                    v37 = 0;
                  v61 = -1;
                  if ( sub_10044CF0((ILoad *)v3, (struct StaticModel *)v37, v22, v37 + 77, 0) )
                  {
                    *(_DWORD *)(v50 + 144) = v37;
                    (*((void (__thiscall **)(struct ModelFrame **))*v37 + 2))(v37);
                    v37[13] = *((struct ModelFrame **)v37[77] + 92);
                  }
                  else
                  {
                    (*((void (__thiscall **)(struct ModelFrame **))*v37 + 2))(v37);
                    (*((void (__thiscall **)(struct ModelFrame **, int))*v37 + 3))(v37, 1);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}
