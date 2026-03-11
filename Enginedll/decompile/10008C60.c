/*
 * func-name: sub_10008C60
 * func-address: 0x10008c60
 * callers: none
 * callees: 0x10003a50, 0x100080a0, 0x1007e380, 0x1007e3d0, 0x1007e670, 0x100a1d10, 0x100e2550, 0x100e6830
 */

char __thiscall sub_10008C60(int *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int *v10; // edi
  int v11; // ebx
  int v12; // eax
  int v13; // eax
  const char *v14; // eax
  void *v15; // ebx
  float v16; // eax
  bool v17; // cc
  const char *v18; // eax
  FILE *v19; // eax
  FILE *v20; // edi
  CRETimer *v21; // eax
  int *v22; // ebp
  CRETimer *v23; // eax
  int v24; // ebx
  unsigned int i; // esi
  int v27; // ecx
  int Buffer; // [esp+18h] [ebp-94h] BYREF
  int v29; // [esp+1Ch] [ebp-90h]
  float v30[2]; // [esp+20h] [ebp-8Ch] BYREF
  fpos_t Position; // [esp+28h] [ebp-84h] BYREF
  _BYTE v32[28]; // [esp+30h] [ebp-7Ch] BYREF
  _BYTE v33[28]; // [esp+4Ch] [ebp-60h] BYREF
  _BYTE v34[28]; // [esp+68h] [ebp-44h] BYREF
  _BYTE v35[28]; // [esp+84h] [ebp-28h] BYREF
  int v36; // [esp+A8h] [ebp-4h]

  this[24] = a9;
  v10 = this + 15;
  v36 = 0;
  this[23] = 0;
  v29 = (int)(this + 24);
  this[13] = 0;
  std::string::operator=(this + 15, &a2);
  v11 = std::string::string(v35, "'");
  LOBYTE(v36) = 1;
  v12 = std::string::string(v34, "Loading '");
  LOBYTE(v36) = 2;
  v13 = std::operator+<char>(v33, v12, v10);
  LOBYTE(v36) = 3;
  std::operator+<char>(v32, v13, v11);
  LOBYTE(v36) = 5;
  std::string::~string(v33);
  LOBYTE(v36) = 6;
  std::string::~string(v34);
  LOBYTE(v36) = 7;
  std::string::~string(v35);
  v14 = (const char *)std::string::c_str(v32);
  LogPrintf(v14);
  this[1] = 0;
  this[2] = 0;
  v15 = (void *)this[5];
  if ( this[4] > (unsigned int)v15 )
    invalid_parameter_noinfo();
  v16 = *((float *)this + 4);
  v17 = LODWORD(v16) <= this[5];
  v30[0] = v16;
  if ( !v17 )
  {
    invalid_parameter_noinfo();
    v16 = v30[0];
  }
  std::vector<Model *>::erase((int)v30, (int)(this + 3), (void *)LODWORD(v16), (int)(this + 3), v15);
  v18 = (const char *)std::string::c_str(&a2);
  v19 = fopen(v18, "rb");
  v20 = v19;
  if ( !v19 )
    goto LABEL_10;
  fread(this + 14, 4u, 1u, v19);
  fread(this + 22, 4u, 1u, v20);
  fread(this + 12, 4u, 1u, v20);
  Position = this[22];
  fsetpos(v20, &Position);
  v21 = REGetGlobalTimer();
  CRETimer::StartMiniTimer(v21);
  v22 = this + 7;
  sub_10003A50(this, v20, this + 7);
  v23 = REGetGlobalTimer();
  v30[0] = CRETimer::StopMiniTimer(v23);
  LogPrintf("Read Mat: %.3f", v30[0]);
  Buffer = 0;
  fread(&Buffer, 4u, 1u, v20);
  v24 = 0;
  if ( Buffer <= 0 )
  {
LABEL_9:
    fclose(v20);
LABEL_10:
    LOBYTE(v36) = 0;
    std::string::~string(v32);
    v36 = -1;
    std::string::~string(&a2);
    return 0;
  }
  while ( !sub_100080A0((ILoad *)this, v20, (struct StaticModel **)v29) )
  {
    if ( ++v24 >= Buffer )
      goto LABEL_9;
  }
  fclose(v20);
  for ( i = 0; ; ++i )
  {
    v27 = v22[1];
    if ( !v27 || i >= (v22[2] - v27) >> 2 )
      break;
    Material::Release(*(Material **)(v22[1] + 4 * i));
  }
  std::string::operator=(*(_DWORD *)v29 + 320, &a2);
  LOBYTE(v36) = 0;
  std::string::~string(v32);
  v36 = -1;
  std::string::~string(&a2);
  return 1;
}
