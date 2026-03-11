/*
 * func-name: ?FindMedia@@YA_NAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBDPAV12@_N@Z
 * func-address: 0x10097220
 * callers: 0x100158b0, 0x10015b30, 0x10015e90, 0x10043050, 0x10083770, 0x10097ea0, 0x100a9e80, 0x100b7400, 0x100d5c90, 0x100d6e70, 0x100e1e90, 0x100e6db0, 0x100f4ca0, 0x100f4f50, 0x1010b030, 0x1010b240, 0x10116db0, 0x1011acf0, 0x1011b080, 0x1011b490, 0x1011fde0, 0x10120cb0, 0x10125a30, 0x10131750, 0x10136530, 0x1013e2e0, 0x10141cd0, 0x10149660, 0x1014c910, 0x1014d2f0, 0x1014d940, 0x1014da70, 0x1014dc70, 0x10159c30, 0x10161f10, 0x10169700, 0x10177850
 * callees: 0x1007bd80, 0x10095c70, 0x100971c0, 0x10099690, 0x10099880, 0x10099a70, 0x100e2550, 0x1017a310, 0x1017aa70, 0x1017ac60
 */

char __cdecl FindMedia(int a1, int a2, int a3, char a4)
{
  int v4; // ebp
  int v5; // eax
  char v6; // bl
  int v7; // eax
  int v8; // eax
  int first_of; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // ebx
  unsigned int v14; // edi
  int v15; // ebp
  int v16; // esi
  int v17; // esi
  int v18; // esi
  int v19; // eax
  unsigned int v20; // edi
  int v21; // ebp
  int v22; // esi
  int v23; // eax
  _BYTE *v24; // ecx
  int v25; // eax
  const char *v27; // eax
  int v28; // [esp-38h] [ebp-CCh] BYREF
  int v29; // [esp-34h] [ebp-C8h]
  int v30; // [esp-30h] [ebp-C4h]
  int v31; // [esp-2Ch] [ebp-C0h]
  int v32; // [esp-28h] [ebp-BCh]
  int v33; // [esp-24h] [ebp-B8h]
  int *v34; // [esp-20h] [ebp-B4h] BYREF
  int v35; // [esp-1Ch] [ebp-B0h] BYREF
  int v36; // [esp-18h] [ebp-ACh]
  int v37; // [esp-14h] [ebp-A8h]
  int v38; // [esp-10h] [ebp-A4h]
  int v39; // [esp-Ch] [ebp-A0h]
  int v40; // [esp-8h] [ebp-9Ch]
  int v41; // [esp-4h] [ebp-98h]
  int *v42; // [esp+10h] [ebp-84h]
  int *v43; // [esp+14h] [ebp-80h]
  _BYTE v44[28]; // [esp+18h] [ebp-7Ch] BYREF
  _BYTE v45[28]; // [esp+34h] [ebp-60h] BYREF
  _BYTE v46[28]; // [esp+50h] [ebp-44h] BYREF
  _BYTE v47[28]; // [esp+6Ch] [ebp-28h] BYREF
  int v48; // [esp+90h] [ebp-4h]

  v4 = a1;
  if ( std::string::length(a1) )
  {
    sub_1017AA70();
    v5 = std::string::substr(a1, v46, 0, 2);
    v48 = 0;
    v6 = std::operator==<char>(v5, "\\\\");
    v48 = -1;
    std::string::~string(v46);
    if ( v6 )
    {
      v7 = sub_1017A310(v46, a1);
      v48 = 1;
      std::string::operator=(a1, v7);
      v48 = -1;
      std::string::~string(v46);
    }
    if ( !a3 )
    {
      v8 = std::string::c_str(a1);
      v42 = &v35;
      std::string::string(&v35, v8);
      if ( sub_1007BD80(v35) )
        return 1;
    }
    std::string::string(v44, a1);
    v48 = 4;
    std::string::string(v45, a2);
    LOBYTE(v48) = 5;
    first_of = std::string::find_first_of(v44, ":", 0);
    if ( first_of != std::string::npos )
    {
      v10 = std::string::substr(v44, v46, first_of + 1, std::string::npos);
      LOBYTE(v48) = 6;
      std::string::operator=(v44, v10);
      LOBYTE(v48) = 5;
      std::string::~string(v46);
    }
    v11 = std::string::find_first_of(v44, "\\/", 0);
    if ( !v11 )
    {
      v12 = std::string::substr(v44, v46, 1, std::string::npos);
      LOBYTE(v48) = 7;
      std::string::operator=(v44, v12);
      LOBYTE(v48) = 5;
      std::string::~string(v46);
      v11 = std::string::find_first_of(v44, "\\/", 0);
    }
    v13 = 0;
    if ( v11 != std::string::npos )
    {
      while ( 1 )
      {
        if ( std::string::length(&unk_1028584C) )
        {
          v14 = 0;
          if ( dword_10285828 > 0 )
          {
            v15 = 0;
            while ( 1 )
            {
              if ( !dword_102858A4 || v14 >= (dword_102858A8 - dword_102858A4) / 104 )
                invalid_parameter_noinfo();
              v16 = sub_10099880(v45);
              if ( v16 )
              {
                v41 = a1;
                v42 = (int *)&v34;
                std::string::string(&v34, v44);
                if ( (unsigned __int8)sub_10099A70((char)v34, v35, v36, v37, v38, v39, v40, v41) )
                  break;
              }
              ++v14;
              v15 += 104;
              if ( (int)v14 >= dword_10285828 )
                goto LABEL_22;
            }
            v13 = v16;
LABEL_22:
            v4 = a1;
          }
          if ( v13 )
            goto LABEL_44;
        }
        v17 = sub_10099880(v45);
        if ( v17 )
        {
          v41 = v4;
          v42 = (int *)&v34;
          std::string::string(&v34, v44);
          if ( (unsigned __int8)sub_10099A70((char)v34, v35, v36, v37, v38, v39, v40, v41) )
          {
            v13 = v17;
LABEL_29:
            if ( v13 )
              goto LABEL_44;
            break;
          }
        }
        v18 = std::string::find_first_of(v44, "\\/", 0);
        if ( v18 == std::string::npos )
          goto LABEL_29;
        v19 = std::string::substr(v44, v46, v18 + 1, std::string::npos);
        LOBYTE(v48) = 8;
        std::string::operator=(v44, v19);
        LOBYTE(v48) = 5;
        std::string::~string(v46);
      }
    }
    if ( std::string::length(&unk_1028584C) )
    {
      v20 = 0;
      if ( dword_10285828 > 0 )
      {
        v21 = 0;
        while ( 1 )
        {
          if ( !dword_102858A4 || v20 >= (dword_102858A8 - dword_102858A4) / 104 )
            invalid_parameter_noinfo();
          v22 = sub_10099880(v45);
          if ( v22 )
          {
            if ( (unsigned __int8)sub_10099690(v44) )
              break;
          }
          ++v20;
          v21 += 104;
          if ( (int)v20 >= dword_10285828 )
          {
            v4 = a1;
            goto LABEL_40;
          }
        }
        std::string::operator=(a1, v44);
        v4 = a1;
        goto LABEL_43;
      }
    }
LABEL_40:
    v22 = sub_10099880(v45);
    if ( v22 && (unsigned __int8)sub_10099690(v44) )
    {
      std::string::operator=(v4, v44);
LABEL_43:
      v13 = v22;
LABEL_44:
      if ( a3 )
      {
        if ( a4 )
        {
          v42 = &v35;
          std::string::string(&v35, v13 + 44);
          v43 = &v28;
          LOBYTE(v48) = 9;
          std::string::string(&v28, v4);
          LOBYTE(v48) = 5;
          v23 = sub_1017AC60(v46, v28, v29, v30, v31, v32, v33, v34, v35);
          LOBYTE(v48) = 10;
          std::string::operator=(a3, v23);
          v24 = v46;
        }
        else
        {
          v43 = &v35;
          v34 = &v35;
          Engine::Instance();
          Engine::GetRootPath((int)v34);
          v42 = &v28;
          LOBYTE(v48) = 11;
          std::string::string(&v28, v4);
          LOBYTE(v48) = 5;
          v25 = sub_1017AC60(v47, v28, v29, v30, v31, v32, v33, v34, v35);
          LOBYTE(v48) = 12;
          std::string::operator=(a3, v25);
          v24 = v47;
        }
        LOBYTE(v48) = 5;
        std::string::~string(v24);
      }
      LOBYTE(v48) = 4;
      std::string::~string(v45);
      v48 = -1;
      std::string::~string(v44);
      return 1;
    }
    v27 = (const char *)std::string::c_str(v4);
    LogPrintf("Warning: Can't find file %s.", v27);
    LOBYTE(v48) = 4;
    std::string::~string(v45);
    v48 = -1;
    std::string::~string(v44);
  }
  return 0;
}
