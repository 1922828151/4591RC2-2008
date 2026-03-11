/*
 * func-name: sub_102B9E20
 * func-address: 0x102b9e20
 * callers: 0x1000fae7
 * callees: 0x100087dd, 0x1000c0e5, 0x102c72a0, 0x102c9d62
 */

int __thiscall sub_102B9E20(_DWORD *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  unsigned int v16; // esi
  int v17; // eax
  int v18; // ecx
  int v19; // edx
  int v20; // esi
  int v21; // esi
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  _BYTE *v26; // ecx
  int v27; // esi
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  const char *v33; // eax
  int v34; // eax
  char *v35; // eax
  _BYTE *v36; // edx
  char v37; // cl
  const char *v38; // eax
  double v39; // st7
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  const char *v47; // eax
  const char *v48; // eax
  const char *v49; // eax
  double v50; // st7
  double v51; // st7
  int v52; // esi
  int v53; // eax
  int v55; // [esp-10h] [ebp-16Ch] BYREF
  char v56; // [esp-Ch] [ebp-168h] BYREF
  int v57; // [esp-8h] [ebp-164h] BYREF
  int v58; // [esp-4h] [ebp-160h]
  int v59; // [esp+0h] [ebp-15Ch]
  int v60; // [esp+4h] [ebp-158h]
  int v61; // [esp+8h] [ebp-154h]
  int v62; // [esp+Ch] [ebp-150h]
  int v63; // [esp+10h] [ebp-14Ch]
  int v64; // [esp+14h] [ebp-148h]
  int v65; // [esp+28h] [ebp-134h]
  float v66; // [esp+2Ch] [ebp-130h]
  float v67; // [esp+30h] [ebp-12Ch]
  float v68; // [esp+34h] [ebp-128h]
  float v69; // [esp+38h] [ebp-124h]
  float v70; // [esp+3Ch] [ebp-120h]
  float v71; // [esp+40h] [ebp-11Ch]
  int v72; // [esp+44h] [ebp-118h]
  _BYTE v73[28]; // [esp+48h] [ebp-114h] BYREF
  _BYTE v74[28]; // [esp+64h] [ebp-F8h] BYREF
  _BYTE v75[28]; // [esp+80h] [ebp-DCh] BYREF
  int v76; // [esp+9Ch] [ebp-C0h]
  _BYTE v77[28]; // [esp+A0h] [ebp-BCh] BYREF
  int v78; // [esp+BCh] [ebp-A0h]
  _BYTE v79[28]; // [esp+C0h] [ebp-9Ch] BYREF
  _BYTE v80[28]; // [esp+DCh] [ebp-80h] BYREF
  _BYTE v81[28]; // [esp+F8h] [ebp-64h] BYREF
  _BYTE v82[28]; // [esp+114h] [ebp-48h] BYREF
  _BYTE v83[28]; // [esp+130h] [ebp-2Ch] BYREF
  int v84; // [esp+158h] [ebp-4h]

  v72 = a2;
  v65 = 0;
  v84 = 1;
  std::string::string(v82);
  LOBYTE(v84) = 2;
  std::string::string(v80);
  LOBYTE(v84) = 3;
  if ( std::string::find(&a3, "set ", 0) != -1 )
  {
    v10 = std::string::find(&a3, "set ", 0);
    v11 = std::string::substr(&a3, v79, v10 + 4, std::string::npos);
    LOBYTE(v84) = 4;
    std::string::operator=(&a3, v11);
    LOBYTE(v84) = 3;
    std::string::~string(v79);
  }
  v12 = std::string::find(&a3, "(", 0);
  v63 = 0;
  if ( v12 == -1 )
  {
    v15 = std::string::find(&a3, " ", v63);
    v14 = std::string::substr(&a3, v79, 0, v15);
    LOBYTE(v84) = 6;
  }
  else
  {
    v13 = std::string::find(&a3, "(", v63);
    v14 = std::string::substr(&a3, v79, 0, v13);
    LOBYTE(v84) = 5;
  }
  std::string::operator=(v80, v14);
  LOBYTE(v84) = 3;
  std::string::~string(v79);
  v66 = COERCE_FLOAT(&v57);
  std::string::string(&v57, v80);
  v16 = sub_1000C0E5(v57, v58, v59, v60, v61, v62, v63);
  if ( v16 != -1 )
  {
    v17 = this[1];
    if ( !v17 || v16 >= (this[2] - v17) / 36 )
      _invalid_parameter_noinfo();
    v18 = this[1];
    v19 = *(_DWORD *)(v18 + 36 * v16);
    v20 = v18 + 36 * v16;
    v76 = v19;
    std::string::string(v77, (void *)(v20 + 4));
    v78 = *(_DWORD *)(v20 + 32);
    LOBYTE(v84) = 7;
    v63 = 0;
    if ( v76 == 2 )
    {
      if ( std::string::find(&a3, "=", v63) != -1 )
      {
        std::string::string(a2, "That's a command, you can't give it a value, silly!");
        v65 = 1;
LABEL_43:
        LOBYTE(v84) = 3;
        std::string::~string(v77);
        goto LABEL_44;
      }
      std::string::string(v81);
      LOBYTE(v84) = 8;
      if ( std::string::find(&a3, "(", 0) == -1 )
      {
        v63 = std::string::length(&a3);
        v24 = std::string::find(&a3, " ", 0);
        v23 = std::string::substr(&a3, v79, v24 + 1, v63);
        LOBYTE(v84) = 10;
      }
      else
      {
        v21 = -1 - std::string::find(&a3, "(", 0);
        v63 = std::string::find_last_of(&a3, ")", std::string::npos) + v21;
        v22 = std::string::find(&a3, "(", 0);
        v23 = std::string::substr(&a3, v79, v22 + 1, v63);
        LOBYTE(v84) = 9;
      }
      std::string::operator=(v81, v23);
      LOBYTE(v84) = 8;
      std::string::~string(v79);
      if ( (unsigned __int8)std::operator==<char>(v81, &unk_103252BB) )
      {
        ((void (*)(void))v78)();
      }
      else
      {
        v25 = std::string::c_str(v81);
        ((void (__cdecl *)(int))v78)(v25);
      }
      std::string::string(a2, "Command Executed");
      v65 = 1;
      v26 = v81;
    }
    else if ( std::string::find(&a3, " ", v63) == -1 )
    {
      v66 = COERCE_FLOAT(&v55);
      v55 = v76;
      std::string::string(&v56, v77);
      v27 = sub_100087DD((int)v83, v55, v56, v57, v58, v59, v60, v61, v62, v78);
      LOBYTE(v84) = 11;
      v28 = std::operator+<char>(v79, v80, " = ");
      LOBYTE(v84) = 12;
      std::operator+<char>(a2, v28, v27);
      v65 = 1;
      LOBYTE(v84) = 11;
      std::string::~string(v79);
      v26 = v83;
    }
    else
    {
      std::string::string(v75);
      LOBYTE(v84) = 13;
      if ( std::string::find(&a3, " ", 0) == -1 )
      {
        v63 = std::string::length(&a3);
        v31 = std::string::find(&a3, "=", 0);
        v32 = std::string::substr(&a3, v79, v31 + 1, v63);
        LOBYTE(v84) = 15;
        std::string::operator=(v75, v32);
        LOBYTE(v84) = 13;
        std::string::~string(v79);
        sub_102C72A0(v75, v64);
      }
      else
      {
        v63 = std::string::length(&a3);
        v29 = std::string::find(&a3, " ", 0);
        v30 = std::string::substr(&a3, v79, v29 + 1, v63);
        LOBYTE(v84) = 14;
        std::string::operator=(v75, v30);
        LOBYTE(v84) = 13;
        std::string::~string(v79);
      }
      switch ( v76 )
      {
        case 5:
          v33 = (const char *)std::string::c_str(v75);
          v34 = atoi(v33);
          *(_DWORD *)v78 = v34;
          goto LABEL_40;
        case 6:
          v40 = std::string::find(v75, " ", 0);
          std::string::substr(v75, v79, 0, v40);
          v63 = std::string::npos;
          LOBYTE(v84) = 16;
          v41 = std::string::find(v75, " ", 0);
          v42 = std::string::substr(v75, v74, v41 + 1, v63);
          LOBYTE(v84) = 17;
          std::string::operator=(v75, v42);
          LOBYTE(v84) = 16;
          std::string::~string(v74);
          v43 = std::string::find(v75, " ", 0);
          std::string::substr(v75, v83, 0, v43);
          v63 = std::string::npos;
          LOBYTE(v84) = 18;
          v44 = std::string::find(v75, " ", 0);
          v45 = std::string::substr(v75, v73, v44 + 1, v63);
          LOBYTE(v84) = 19;
          std::string::operator=(v75, v45);
          LOBYTE(v84) = 18;
          std::string::~string(v73);
          v46 = std::string::find(v75, " ", 0);
          std::string::substr(v75, v81, 0, v46);
          LOBYTE(v84) = 20;
          v47 = (const char *)std::string::c_str(v79);
          v70 = atof(v47);
          v48 = (const char *)std::string::c_str(v83);
          v71 = atof(v48);
          v49 = (const char *)std::string::c_str(v81);
          v66 = atof(v49);
          v67 = v70;
          v50 = v71;
          *(float *)v78 = v70;
          v68 = v50;
          v51 = v66;
          *(float *)(v78 + 4) = v68;
          v69 = v51;
          *(float *)(v78 + 8) = v69;
          LOBYTE(v84) = 18;
          std::string::~string(v81);
          LOBYTE(v84) = 16;
          std::string::~string(v83);
          LOBYTE(v84) = 13;
          std::string::~string(v79);
          goto LABEL_40;
        case 7:
          v38 = (const char *)std::string::c_str(v75);
          v39 = atof(v38);
          *(float *)v78 = v39;
          goto LABEL_40;
        case 8:
          std::string::resize(v78, 256);
          v35 = (char *)std::string::c_str(v75);
          v36 = (_BYTE *)v78;
          do
          {
            v37 = *v35;
            *v36++ = *v35++;
          }
          while ( v37 );
          goto LABEL_40;
        case 9:
          if ( std::string::find(v75, "true", 0) == -1 && std::string::find(v75, "1", 0) == -1 )
          {
            if ( std::string::find(v75, "false", 0) == -1 && std::string::find(v75, "0", 0) == -1 )
            {
              std::string::string(a2, "Invalid value for bool. Use true/false or 1/0");
              v65 = 1;
              goto LABEL_41;
            }
            *(_BYTE *)v78 = 0;
          }
          else
          {
            *(_BYTE *)v78 = 1;
          }
LABEL_40:
          v66 = COERCE_FLOAT(&v55);
          v55 = v76;
          std::string::string(&v56, v77);
          v52 = sub_100087DD((int)v74, v55, v56, v57, v58, v59, v60, v61, v62, v78);
          LOBYTE(v84) = 21;
          v53 = std::operator+<char>(v73, v80, " set to: ");
          LOBYTE(v84) = 22;
          std::operator+<char>(a2, v53, v52);
          v65 = 1;
          LOBYTE(v84) = 21;
          std::string::~string(v73);
          LOBYTE(v84) = 13;
          std::string::~string(v74);
LABEL_41:
          v26 = v75;
          break;
        default:
          goto LABEL_40;
      }
    }
    LOBYTE(v84) = 7;
    std::string::~string(v26);
    goto LABEL_43;
  }
  std::string::string(a2, &unk_103252B7);
  v65 = 1;
LABEL_44:
  LOBYTE(v84) = 2;
  std::string::~string(v80);
  LOBYTE(v84) = 1;
  std::string::~string(v82);
  LOBYTE(v84) = 0;
  std::string::~string(&a3);
  return a2;
}
