/*
 * func-name: sub_102BE800
 * func-address: 0x102be800
 * callers: 0x102beea0
 * callees: 0x10011b7b, 0x10017b9d, 0x102c04d0, 0x102c7520, 0x102c7980, 0x102c9d62
 */

void __thiscall sub_102BE800(_DWORD *this, void *a2, void *a3, void *a4)
{
  int v5; // edi
  unsigned int v6; // ebx
  _DWORD *v7; // esi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // edi
  int v12; // eax
  unsigned int v13; // edi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  unsigned int v17; // edi
  unsigned int v18; // edi
  unsigned int v19; // edi
  unsigned int v20; // edi
  int v21; // eax
  void *v22; // edi
  bool v23; // cf
  int v24; // eax
  unsigned int v25; // edi
  int i; // ebp
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // [esp+14h] [ebp-18Ch]
  unsigned int v31; // [esp+14h] [ebp-18Ch]
  unsigned int v32; // [esp+14h] [ebp-18Ch]
  unsigned int v33; // [esp+28h] [ebp-178h]
  unsigned int v34; // [esp+30h] [ebp-170h]
  unsigned int v35; // [esp+38h] [ebp-168h]
  unsigned int v36; // [esp+40h] [ebp-160h]
  _BYTE v37[28]; // [esp+44h] [ebp-15Ch] BYREF
  _BYTE v38[28]; // [esp+60h] [ebp-140h] BYREF
  _BYTE v39[136]; // [esp+7Ch] [ebp-124h] BYREF
  _BYTE v40[28]; // [esp+104h] [ebp-9Ch] BYREF
  _BYTE v41[28]; // [esp+120h] [ebp-80h] BYREF
  _BYTE v42[28]; // [esp+13Ch] [ebp-64h] BYREF
  _BYTE v43[28]; // [esp+158h] [ebp-48h] BYREF
  _BYTE v44[28]; // [esp+174h] [ebp-2Ch] BYREF
  int v45; // [esp+19Ch] [ebp-4h]

  std::string::string(v40, a2);
  v5 = 0;
  v45 = 0;
  std::string::string(v42, a4);
  LOBYTE(v45) = 1;
  sub_102C7520(v40);
  sub_102C7520(v42);
  std::operator+<char>(v44, v40, " ");
  LOBYTE(v45) = 2;
  std::operator+<char>(v43, v40, "=");
  LOBYTE(v45) = 3;
  v6 = 0;
  v7 = this + 12;
  while ( 1 )
  {
    v8 = this[13];
    if ( !v8 || v6 >= (this[14] - v8) / 28 )
      break;
    v9 = this[13];
    if ( !v9 || v6 >= (this[14] - v9) / 28 )
      _invalid_parameter_noinfo();
    std::string::string(v41, (void *)(v5 + this[13]));
    LOBYTE(v45) = 4;
    sub_102C7520(v41);
    if ( !std::string::find(v41, v44, 0) || !std::string::find(v41, v43, 0) )
    {
      v10 = std::operator+<char>(v38, a2, " = ");
      LOBYTE(v45) = 5;
      v11 = std::operator+<char>(v37, v10, a3);
      v12 = this[13];
      LOBYTE(v45) = 6;
      if ( !v12 || v6 >= (this[14] - v12) / 28 )
        _invalid_parameter_noinfo();
      std::string::operator=(this[13] + 28 * v6, v11);
      LOBYTE(v45) = 5;
      std::string::~string(v37);
      LOBYTE(v45) = 4;
      std::string::~string(v38);
      v13 = 0;
      if ( sub_10011B7B() )
      {
        v30 = 0;
        do
        {
          v14 = this[1];
          if ( !v14 || v13 >= (this[2] - v14) / 28 )
            _invalid_parameter_noinfo();
          if ( (unsigned __int8)std::operator==<char>(v30 + this[1], v40) )
          {
            v15 = this[5];
            if ( !v15 || v13 >= (this[6] - v15) / 28 )
              _invalid_parameter_noinfo();
            std::string::operator=(v30 + this[5], a3);
          }
          v30 += 28;
          ++v13;
        }
        while ( v13 < sub_10011B7B() );
      }
      LOBYTE(v45) = 3;
      std::string::~string(v41);
      break;
    }
    LOBYTE(v45) = 3;
    std::string::~string(v41);
    ++v6;
    v5 += 28;
  }
  v16 = this[13];
  if ( v16 )
    v16 = (this[14] - v16) / 28;
  if ( v6 == v16 )
  {
    v17 = this[13];
    if ( v17 > this[14] )
      _invalid_parameter_noinfo();
    v35 = v17;
    v18 = this[5];
    if ( v18 > this[6] )
      _invalid_parameter_noinfo();
    v34 = v18;
    v19 = this[1];
    if ( v19 > this[2] )
      _invalid_parameter_noinfo();
    v33 = v19;
    v20 = this[9];
    if ( v20 > this[10] )
      _invalid_parameter_noinfo();
    v36 = v20;
    while ( 1 )
    {
      v31 = this[14];
      if ( this[13] > v31 )
        _invalid_parameter_noinfo();
      if ( v35 == v31 )
        break;
      if ( v35 >= this[14] )
        _invalid_parameter_noinfo();
      if ( std::string::find(v35, a4, 0) != std::string::npos )
      {
        while ( 1 )
        {
          v32 = this[10];
          if ( this[9] > v32 )
            _invalid_parameter_noinfo();
          if ( v36 == v32 )
            break;
          if ( v36 >= this[10] )
            _invalid_parameter_noinfo();
          if ( (unsigned __int8)std::operator==<char>(a4, v36) )
          {
            sub_10017B9D((int)(this + 8), v36, 1, v42);
            sub_10017B9D((int)this, v33, 1, v40);
            sub_10017B9D((int)(this + 4), v34, 1, a3);
            break;
          }
          if ( v36 >= this[10] )
            _invalid_parameter_noinfo();
          v36 += 28;
          if ( v34 >= this[6] )
            _invalid_parameter_noinfo();
          v34 += 28;
          if ( v33 >= this[2] )
            _invalid_parameter_noinfo();
          v33 += 28;
        }
        v21 = std::operator+<char>(v37, a2, " = ");
        LOBYTE(v45) = 7;
        v22 = (void *)std::operator+<char>(v38, v21, a3);
        v23 = v35 < this[14];
        LOBYTE(v45) = 8;
        if ( !v23 )
          _invalid_parameter_noinfo();
        sub_10017B9D((int)(this + 12), v35 + 28, 1, v22);
        LOBYTE(v45) = 7;
        std::string::~string(v38);
        LOBYTE(v45) = 3;
        std::string::~string(v37);
        break;
      }
      if ( v35 >= this[14] )
        _invalid_parameter_noinfo();
      v35 += 28;
    }
  }
  sub_102C7980();
  v24 = std::string::c_str(this + 16);
  std::ofstream::ofstream(v39, v24, 2, 64, 1);
  v25 = 0;
  LOBYTE(v45) = 9;
  for ( i = 0; ; i += 28 )
  {
    v27 = v7[1];
    if ( !v27 || v25 >= (v7[2] - v27) / 28 )
      break;
    v28 = v7[1];
    if ( !v28 || v25 >= (v7[2] - v28) / 28 )
      _invalid_parameter_noinfo();
    v29 = std::operator<<<char>(v39, i + v7[1]);
    std::ostream::operator<<(v29, std::endl);
    ++v25;
  }
  sub_102C04D0(v39, "//END-OF-FILE");
  std::ofstream::close(v39);
  LOBYTE(v45) = 3;
  std::ofstream::`vbase destructor'(v39);
  LOBYTE(v45) = 2;
  std::string::~string(v43);
  LOBYTE(v45) = 1;
  std::string::~string(v44);
  LOBYTE(v45) = 0;
  std::string::~string(v42);
  v45 = -1;
  std::string::~string(v40);
}
