/*
 * func-name: ?GetTime@XMLSystem@@QAE?AU_SYSTEMTIME@@PAVDOMNode@xercesc_2_5@@_N@Z
 * func-address: 0x1004b830
 * callers: 0x100384a0, 0x10044cf0
 * callees: 0x100116a0, 0x100492d0, 0x1017a7e0, 0x101a2500
 */

struct _SYSTEMTIME *__thiscall XMLSystem::GetTime(
        XMLSystem *this,
        struct _SYSTEMTIME *__return_ptr retstr,
        struct xercesc_2_5::DOMNode *EndPtr,
        char *a4)
{
  char **i; // esi
  void *v5; // eax
  void *v6; // ecx
  const char *v7; // eax
  double v8; // st7
  char *v9; // esi
  bool v10; // zf
  void (__cdecl *v11)(); // ebx
  const char *v12; // eax
  double v13; // st7
  char *v14; // esi
  const char *v15; // eax
  double v16; // st7
  char *v17; // esi
  const char *v18; // eax
  double v19; // st7
  char *v20; // esi
  const char *v21; // eax
  double v22; // st7
  char *v23; // esi
  const char *v24; // eax
  double v25; // st7
  char *v26; // esi
  const char *v27; // eax
  double v28; // st7
  char *v29; // esi
  const char *v30; // eax
  double v31; // st7
  char *v32; // esi
  char *v33; // ebp
  _DWORD v35[7]; // [esp-20h] [ebp-88h] BYREF
  char **p_EndPtr; // [esp-4h] [ebp-6Ch]
  int v37; // [esp+10h] [ebp-58h]
  int v38; // [esp+14h] [ebp-54h] BYREF
  void *v39; // [esp+18h] [ebp-50h]
  char *v40; // [esp+1Ch] [ebp-4Ch]
  int v41; // [esp+20h] [ebp-48h]
  _BYTE v42[28]; // [esp+24h] [ebp-44h] BYREF
  _BYTE v43[28]; // [esp+40h] [ebp-28h] BYREF
  int v44; // [esp+64h] [ebp-4h]

  XMLSystem::GetString((int)v42, (int *)EndPtr, a4);
  v44 = 1;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  for ( i = 0; (int)i < 8; i = (char **)((char *)i + 1) )
  {
    p_EndPtr = i;
    a4 = (char *)v35;
    std::string::string(v35, v42);
    v5 = (void *)sub_1017A7E0(v43, v35[0], v35[1], v35[2], v35[3], v35[4], v35[5], v35[6], p_EndPtr);
    LOBYTE(v44) = 2;
    sub_100116A0(&v38, v5);
    LOBYTE(v44) = 1;
    std::string::~string(v43);
  }
  v6 = v39;
  EndPtr = 0;
  if ( !v39 || !((v40 - (_BYTE *)v39) / 28) )
  {
    invalid_parameter_noinfo();
    v6 = v39;
  }
  p_EndPtr = (char **)&EndPtr;
  v7 = (const char *)std::string::c_str(v6);
  v8 = strtod(v7, p_EndPtr);
  v9 = (char *)v39;
  v10 = v39 == 0;
  v37 = (int)v8;
  retstr->wYear = (int)v8;
  if ( v10 || (unsigned int)((v40 - v9) / 28) <= 1 )
  {
    v11 = invalid_parameter_noinfo;
    invalid_parameter_noinfo();
    v9 = (char *)v39;
  }
  else
  {
    v11 = invalid_parameter_noinfo;
  }
  p_EndPtr = (char **)&EndPtr;
  v12 = (const char *)std::string::c_str(v9 + 28);
  v13 = strtod(v12, p_EndPtr);
  v14 = (char *)v39;
  v10 = v39 == 0;
  retstr->wMonth = (int)v13;
  if ( v10 || (unsigned int)((v40 - v14) / 28) <= 2 )
  {
    v11();
    v14 = (char *)v39;
  }
  p_EndPtr = (char **)&EndPtr;
  v15 = (const char *)std::string::c_str(v14 + 56);
  v16 = strtod(v15, p_EndPtr);
  v17 = (char *)v39;
  v10 = v39 == 0;
  retstr->wDayOfWeek = (int)v16;
  if ( v10 || (unsigned int)((v40 - v17) / 28) <= 3 )
  {
    v11();
    v17 = (char *)v39;
  }
  p_EndPtr = (char **)&EndPtr;
  v18 = (const char *)std::string::c_str(v17 + 84);
  v19 = strtod(v18, p_EndPtr);
  v20 = (char *)v39;
  v10 = v39 == 0;
  retstr->wDay = (int)v19;
  if ( v10 || (unsigned int)((v40 - v20) / 28) <= 4 )
  {
    v11();
    v20 = (char *)v39;
  }
  p_EndPtr = (char **)&EndPtr;
  v21 = (const char *)std::string::c_str(v20 + 112);
  v22 = strtod(v21, p_EndPtr);
  v23 = (char *)v39;
  v10 = v39 == 0;
  retstr->wHour = (int)v22;
  if ( v10 || (unsigned int)((v40 - v23) / 28) <= 5 )
  {
    v11();
    v23 = (char *)v39;
  }
  p_EndPtr = (char **)&EndPtr;
  v24 = (const char *)std::string::c_str(v23 + 140);
  v25 = strtod(v24, p_EndPtr);
  v26 = (char *)v39;
  v10 = v39 == 0;
  retstr->wMinute = (int)v25;
  if ( v10 || (unsigned int)((v40 - v26) / 28) <= 6 )
  {
    v11();
    v26 = (char *)v39;
  }
  p_EndPtr = (char **)&EndPtr;
  v27 = (const char *)std::string::c_str(v26 + 168);
  v28 = strtod(v27, p_EndPtr);
  v29 = (char *)v39;
  v10 = v39 == 0;
  retstr->wSecond = (int)v28;
  if ( v10 || (unsigned int)((v40 - v29) / 28) <= 7 )
  {
    v11();
    v29 = (char *)v39;
  }
  p_EndPtr = (char **)&EndPtr;
  v30 = (const char *)std::string::c_str(v29 + 196);
  v31 = strtod(v30, p_EndPtr);
  v32 = (char *)v39;
  v10 = v39 == 0;
  LOBYTE(v44) = 0;
  retstr->wMilliseconds = (int)v31;
  if ( !v10 )
  {
    v33 = v40;
    if ( v32 != v40 )
    {
      do
      {
        std::string::~string(v32);
        v32 += 28;
      }
      while ( v32 != v33 );
      v32 = (char *)v39;
    }
    operator delete(v32);
  }
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v44 = -1;
  std::string::~string(v42);
  return retstr;
}
