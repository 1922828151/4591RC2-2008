/*
 * func-name: ?GetColor@XMLSystem@@QAEKPAVDOMNode@xercesc_2_5@@_N@Z
 * func-address: 0x10049460
 * callers: none
 * callees: 0x100492d0, 0x1017a7e0
 */

unsigned int __thiscall XMLSystem::GetColor(XMLSystem *this, struct xercesc_2_5::DOMNode *a2, char *a3)
{
  int v3; // eax
  int v4; // esi
  int v5; // ebx
  int v6; // esi
  int v7; // eax
  const char *v8; // eax
  int v9; // edi
  const char *v10; // eax
  int v11; // esi
  const char *v12; // eax
  int v13; // edi
  const char *v14; // eax
  unsigned int v15; // esi
  _BYTE *v16; // ecx
  int v17; // ebx
  int v18; // edi
  int v19; // eax
  const char *v20; // eax
  int v21; // esi
  const char *v22; // eax
  int v23; // edi
  const char *v24; // eax
  int v26; // [esp-20h] [ebp-124h] BYREF
  int v27; // [esp-1Ch] [ebp-120h]
  int v28; // [esp-18h] [ebp-11Ch]
  int v29; // [esp-14h] [ebp-118h]
  int v30; // [esp-10h] [ebp-114h]
  int v31; // [esp-Ch] [ebp-110h]
  int v32; // [esp-8h] [ebp-10Ch]
  int v33; // [esp-4h] [ebp-108h]
  int *v34; // [esp+10h] [ebp-F4h]
  int *v35; // [esp+14h] [ebp-F0h]
  _BYTE v36[28]; // [esp+18h] [ebp-ECh] BYREF
  _BYTE v37[28]; // [esp+34h] [ebp-D0h] BYREF
  _BYTE v38[28]; // [esp+50h] [ebp-B4h] BYREF
  _BYTE v39[28]; // [esp+6Ch] [ebp-98h] BYREF
  _BYTE v40[28]; // [esp+88h] [ebp-7Ch] BYREF
  _BYTE v41[28]; // [esp+A4h] [ebp-60h] BYREF
  _BYTE v42[28]; // [esp+C0h] [ebp-44h] BYREF
  _BYTE v43[28]; // [esp+DCh] [ebp-28h] BYREF
  int v44; // [esp+100h] [ebp-4h]

  XMLSystem::GetString((int)v36, (int *)a2, a3);
  v33 = 4;
  v35 = &v26;
  v44 = 0;
  std::string::string(&v26, v36);
  v3 = sub_1017A7E0(v37, v26, v27, v28, v29, v30, v31, v32, v33);
  LOBYTE(v44) = 1;
  v4 = std::string::length(v3);
  LOBYTE(v44) = 0;
  std::string::~string(v37);
  if ( v4 )
  {
    v33 = 3;
    v35 = &v26;
    std::string::string(&v26, v36);
    v5 = sub_1017A7E0(v42, v26, v27, v28, v29, v30, v31, v32, v33);
    v33 = 0;
    v35 = &v26;
    LOBYTE(v44) = 2;
    std::string::string(&v26, v36);
    v35 = (int *)sub_1017A7E0(v40, v26, v27, v28, v29, v30, v31, v32, v33);
    v33 = 1;
    v34 = &v26;
    LOBYTE(v44) = 3;
    std::string::string(&v26, v36);
    v6 = sub_1017A7E0(v38, v26, v27, v28, v29, v30, v31, v32, v33);
    v33 = 2;
    v34 = &v26;
    LOBYTE(v44) = 4;
    std::string::string(&v26, v36);
    v7 = sub_1017A7E0(v37, v26, v27, v28, v29, v30, v31, v32, v33);
    LOBYTE(v44) = 5;
    v8 = (const char *)std::string::c_str(v7);
    v9 = 255 * atoi(v8);
    v10 = (const char *)std::string::c_str(v6);
    v11 = v9 | (65280 * atoi(v10));
    v12 = (const char *)std::string::c_str(v35);
    v13 = v11 | (16711680 * atoi(v12));
    v14 = (const char *)std::string::c_str(v5);
    v15 = v13 | (-16777216 * atoi(v14));
    LOBYTE(v44) = 4;
    std::string::~string(v37);
    LOBYTE(v44) = 3;
    std::string::~string(v38);
    LOBYTE(v44) = 2;
    std::string::~string(v40);
    v16 = v42;
  }
  else
  {
    v33 = 0;
    v34 = &v26;
    std::string::string(&v26, v36);
    v17 = sub_1017A7E0(v43, v26, v27, v28, v29, v30, v31, v32, v33);
    v33 = 1;
    v34 = &v26;
    LOBYTE(v44) = 6;
    std::string::string(&v26, v36);
    v18 = sub_1017A7E0(v41, v26, v27, v28, v29, v30, v31, v32, v33);
    v33 = 2;
    v34 = &v26;
    LOBYTE(v44) = 7;
    std::string::string(&v26, v36);
    v19 = sub_1017A7E0(v39, v26, v27, v28, v29, v30, v31, v32, v33);
    LOBYTE(v44) = 8;
    v20 = (const char *)std::string::c_str(v19);
    v21 = 255 * atoi(v20);
    v22 = (const char *)std::string::c_str(v18);
    v23 = v21 | (65280 * atoi(v22));
    v24 = (const char *)std::string::c_str(v17);
    v15 = v23 | (-65536 * atoi(v24)) | 0xFF000000;
    LOBYTE(v44) = 7;
    std::string::~string(v39);
    LOBYTE(v44) = 6;
    std::string::~string(v41);
    v16 = v43;
  }
  LOBYTE(v44) = 0;
  std::string::~string(v16);
  v44 = -1;
  std::string::~string(v36);
  return v15;
}
