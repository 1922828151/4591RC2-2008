/*
 * func-name: ?Initalize@MaterialIntersect@@QAE_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x10159c30
 * callers: none
 * callees: 0x10001720, 0x100017b0, 0x100490f0, 0x10049250, 0x100492d0, 0x1004a5a0, 0x1004ae30, 0x10097220, 0x101591c0, 0x10159220, 0x1015ab20
 */

char __thiscall MaterialIntersect::Initalize(char *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // esi
  struct xercesc_2_5::DOMTreeWalker *Walker; // edi
  int (__thiscall *v11)(struct xercesc_2_5::DOMTreeWalker *); // eax
  char *i; // esi
  int (__thiscall *v13)(char *, const wchar_t *, _DWORD); // eax
  int *v14; // eax
  int String; // eax
  int (__thiscall *v16)(char *); // eax
  int v17; // edi
  char *v18; // ebp
  int (__thiscall *v19)(int); // eax
  int v20; // esi
  int *v21; // eax
  int v22; // eax
  int (__thiscall *v23)(int, const wchar_t *); // eax
  int *v24; // eax
  int v25; // eax
  char v26; // [esp-18h] [ebp-144h] BYREF
  int v27; // [esp-14h] [ebp-140h]
  int v28; // [esp-10h] [ebp-13Ch]
  int v29; // [esp-Ch] [ebp-138h]
  int v30; // [esp-8h] [ebp-134h]
  int v31; // [esp-4h] [ebp-130h]
  char *v32; // [esp+0h] [ebp-12Ch]
  char *v33; // [esp+4h] [ebp-128h]
  char *v34; // [esp+14h] [ebp-118h]
  char *v35; // [esp+18h] [ebp-114h]
  _BYTE v36[4]; // [esp+1Ch] [ebp-110h] BYREF
  _BYTE v37[24]; // [esp+20h] [ebp-10Ch] BYREF
  _BYTE v38[28]; // [esp+38h] [ebp-F4h] BYREF
  xercesc_2_5::AbstractDOMParser *v39; // [esp+54h] [ebp-D8h] BYREF
  _BYTE v40[60]; // [esp+74h] [ebp-B8h] BYREF
  char v41[4]; // [esp+B0h] [ebp-7Ch] BYREF
  _BYTE v42[24]; // [esp+B4h] [ebp-78h] BYREF
  _BYTE v43[28]; // [esp+CCh] [ebp-60h] BYREF
  _BYTE v44[28]; // [esp+E8h] [ebp-44h] BYREF
  _BYTE v45[28]; // [esp+104h] [ebp-28h] BYREF
  int v46; // [esp+128h] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+12Ch] [ebp+0h]

  v34 = this;
  v8 = (int)(this + 32);
  v46 = 0;
  std::string::operator=(this + 32, &a2);
  if ( !FindMedia(v8, (int)"Scripts", 0, 0) )
    goto LABEL_4;
  XMLSystem::XMLSystem((XMLSystem *)&v39);
  v35 = &v26;
  LOBYTE(v46) = 1;
  std::string::string(&v26, v8);
  if ( !XMLSystem::Load((int)&v39, v26, v27, v28, v29, v30, v31, (int)v32) )
  {
    LOBYTE(v46) = 0;
    XMLSystem::~XMLSystem((XMLSystem *)&v39);
LABEL_4:
    v46 = -1;
    std::string::~string(&a2);
    return 0;
  }
  Walker = XMLSystem::GetWalker(&v39);
  v35 = (char *)Walker;
  sub_101591C0(v41);
  v11 = *(int (__thiscall **)(struct xercesc_2_5::DOMTreeWalker *))(*(_DWORD *)Walker + 48);
  LOBYTE(v46) = 2;
  for ( i = (char *)v11(Walker);
        i;
        i = (char *)(*(int (__thiscall **)(struct xercesc_2_5::DOMTreeWalker *))(*(_DWORD *)Walker + 40))(Walker) )
  {
    if ( (*(unsigned __int16 (__thiscall **)(char *))(*(_DWORD *)i + 12))(i) == 1 )
    {
      XMLSystem::GetName((int)v38, i);
      v13 = *(int (__thiscall **)(char *, const wchar_t *, _DWORD))(*(_DWORD *)i + 164);
      LOBYTE(v46) = 3;
      v14 = (int *)v13(i, L"type", 0);
      String = XMLSystem::GetString((int)v37, v14, v33);
      std::string::operator=(v42, String);
      LOBYTE(retaddr) = 3;
      std::string::~string(v37);
      v16 = *(int (__thiscall **)(char *))(*(_DWORD *)i + 168);
      v33 = (char *)L"Material";
      v17 = v16(i);
      v18 = 0;
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 8))(v17) )
      {
        while ( 1 )
        {
          v19 = *(int (__thiscall **)(int))(*(_DWORD *)v17 + 4);
          v32 = v18;
          v20 = v19(v17);
          v21 = (int *)(*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)v20 + 164))(v20, L"type", 0);
          v22 = XMLSystem::GetString((int)v36, v21, v32);
          LOBYTE(v46) = 5;
          std::string::operator=(v43, v22);
          LOBYTE(v46) = 3;
          std::string::~string(v36);
          v23 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v20 + 164);
          v32 = 0;
          v24 = (int *)v23(v20, L"filename");
          v25 = XMLSystem::GetString((int)v45, v24, v32);
          LOBYTE(v46) = 6;
          std::string::operator=(v44, v25);
          LOBYTE(v46) = 3;
          std::string::~string(v45);
          if ( (unsigned __int8)std::operator==<char>(v38, "FX") )
            break;
          if ( (unsigned __int8)std::operator==<char>(v38, "SD") )
          {
            v32 = v41;
            goto LABEL_12;
          }
LABEL_13:
          if ( (unsigned int)++v18 >= (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 8))(v17) )
            goto LABEL_14;
        }
        v32 = v41;
LABEL_12:
        sub_1015AB20(v32);
        goto LABEL_13;
      }
LABEL_14:
      LOBYTE(v46) = 2;
      std::string::~string(v38);
      Walker = (struct xercesc_2_5::DOMTreeWalker *)v35;
    }
  }
  XMLSystem::Destroy((XMLSystem *)&v39);
  LOBYTE(v46) = 1;
  sub_10159220(v41);
  LOBYTE(v46) = 7;
  std::string::~string(v40);
  LOBYTE(v46) = 0;
  std::string::~string(&v39);
  v46 = -1;
  std::string::~string(&a2);
  return 1;
}
