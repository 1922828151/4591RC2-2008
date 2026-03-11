/*
 * func-name: sub_101198C0
 * func-address: 0x101198c0
 * callers: 0x10138380
 * callees: 0x10097800, 0x100e26b0, 0x10118c10, 0x10118c20, 0x10118ce0, 0x10118d20, 0x10118e00, 0x10118e30, 0x10118e70, 0x10118ff0, 0x101190e0, 0x1011a560, 0x101a2500, 0x101a2534
 */

void __stdcall sub_101198C0(
        _DWORD *a1,
        char a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        struct Actor *a18,
        struct World *a19)
{
  int v19; // edi
  _DWORD *v20; // eax
  int v21; // ebp
  _DWORD *v22; // ebx
  const char *v23; // eax
  const char *v24; // eax
  unsigned int i; // edi
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  char *v34; // eax
  const char *v35; // eax
  char *v36; // eax
  const char *v37; // eax
  char *v38; // eax
  char *v39; // eax
  struct World *v40; // esi
  double v41; // [esp+0h] [ebp-B8h]
  const char *v42; // [esp+4h] [ebp-B4h]
  char *v43; // [esp+4h] [ebp-B4h]
  int v44; // [esp+4h] [ebp-B4h]
  char *v45; // [esp+4h] [ebp-B4h]
  Script *v46; // [esp+18h] [ebp-A0h]
  int v47; // [esp+1Ch] [ebp-9Ch] BYREF
  _BYTE v48[28]; // [esp+20h] [ebp-98h] BYREF
  _BYTE v49[28]; // [esp+3Ch] [ebp-7Ch] BYREF
  _BYTE v50[28]; // [esp+58h] [ebp-60h] BYREF
  _BYTE v51[28]; // [esp+74h] [ebp-44h] BYREF
  _BYTE v52[28]; // [esp+90h] [ebp-28h] BYREF
  int v53; // [esp+B4h] [ebp-4h]

  v19 = (int)(a1 + 7);
  if ( std::string::length(a1 + 7) )
  {
    v20 = operator new(0x8Cu);
    v21 = 0;
    if ( v20 )
    {
      v22 = v20;
      v20[34] = -1;
      v46 = (Script *)v20;
    }
    else
    {
      v46 = 0;
      v22 = 0;
    }
    v47 = (int)v22;
    v42 = (const char *)std::string::c_str(a1);
    v23 = (const char *)std::string::c_str(v19);
    LogPrintf(2, "Loading script.. Class: '%s' Script: '%s'(.py)", v23, v42);
    if ( !Script::Create(v22, v19, v19) )
    {
      v24 = (const char *)std::string::c_str(a1);
      Warning("Script Creation failed for %s", v24);
    }
    for ( i = 0; ; ++i )
    {
      v26 = a1[29];
      if ( !v26 || i >= (a1[30] - v26) / 28 )
        break;
      v27 = a1[29];
      if ( !v27 || i >= (a1[30] - v27) / 28 )
        invalid_parameter_noinfo();
      std::string::string(v50, v21 + a1[29]);
      v28 = a1[33];
      v53 = 0;
      if ( !v28 || i >= (a1[34] - v28) / 28 )
        invalid_parameter_noinfo();
      std::string::string(v49, v21 + a1[33]);
      LOBYTE(v53) = 1;
      if ( *(_BYTE *)std::string::operator[](v49, 0) == 34 )
      {
        std::string::string(v48, v49);
        LOBYTE(v53) = 2;
        if ( *(_BYTE *)std::string::operator[](v48, 0) == 34 )
        {
          v29 = std::string::length(v48);
          v30 = std::string::substr(v48, v51, 1, v29);
          LOBYTE(v53) = 3;
          std::string::operator=(v48, v30);
          LOBYTE(v53) = 2;
          std::string::~string(v51);
        }
        v31 = std::string::size(v48);
        if ( *(_BYTE *)std::string::operator[](v48, v31 - 1) == 34 )
        {
          v32 = std::string::length(v48);
          v33 = std::string::substr(v48, v51, 0, v32 - 1);
          LOBYTE(v53) = 4;
          std::string::operator=(v48, v33);
          LOBYTE(v53) = 2;
          std::string::~string(v51);
        }
        v43 = (char *)std::string::c_str(v48);
        v34 = (char *)std::string::c_str(v50);
        Script::Set(v46, v34, v43);
        LOBYTE(v53) = 1;
        std::string::~string(v48);
      }
      else if ( sub_101190E0((int)v49) )
      {
        std::string::string(v52, v49);
        LOBYTE(v53) = 5;
        if ( std::string::find(v52, ".", 0) == -1 )
        {
          v37 = (const char *)std::string::c_str(v49);
          v44 = atol(v37);
          v38 = (char *)std::string::c_str(v50);
          Script::Set(v46, v38, v44);
        }
        else
        {
          v35 = (const char *)std::string::c_str(v49);
          v41 = atof(v35);
          v36 = (char *)std::string::c_str(v50);
          Script::Set(v46, v36, v41);
        }
        LOBYTE(v53) = 1;
        std::string::~string(v52);
      }
      else
      {
        v45 = (char *)std::string::c_str(v49);
        v39 = (char *)std::string::c_str(v50);
        Script::InitProp(v46, v39, v45);
      }
      LOBYTE(v53) = 0;
      std::string::~string(v49);
      v53 = -1;
      std::string::~string(v50);
      v21 += 28;
    }
    v40 = a19;
    Script::Initialize(v46, a18, a19, (struct Matrix *)&a2);
    if ( Script::HasFunction(v46, "Tick") )
    {
      sub_1011A560((int)v40 + 3252, (int)&v47);
    }
    else if ( v46 )
    {
      Script::~Script(v46);
      operator delete(v46);
    }
  }
}
