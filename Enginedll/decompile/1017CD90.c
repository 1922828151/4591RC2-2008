/*
 * func-name: sub_1017CD90
 * func-address: 0x1017cd90
 * callers: 0x1017d430
 * callees: 0x1000dc90, 0x100161f0, 0x100993b0, 0x1017a610, 0x1017aa70, 0x101a2c8e
 */

int __thiscall sub_1017CD90(_DWORD *this, int a2, void *a3, int a4)
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
  CREControl *v18; // edi
  CREControl *v19; // edi
  CREControl *v20; // edi
  int v21; // eax
  void *v22; // edi
  bool v23; // cf
  int v24; // eax
  unsigned int v25; // edi
  int i; // ebp
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v31; // [esp+14h] [ebp-18Ch]
  unsigned int v32; // [esp+14h] [ebp-18Ch]
  CREControl *v33; // [esp+14h] [ebp-18Ch]
  CREControl *v34; // [esp+28h] [ebp-178h]
  CREControl *v35; // [esp+30h] [ebp-170h]
  unsigned int v36; // [esp+38h] [ebp-168h]
  CREControl *v37; // [esp+40h] [ebp-160h]
  _BYTE v38[28]; // [esp+44h] [ebp-15Ch] BYREF
  _BYTE v39[28]; // [esp+60h] [ebp-140h] BYREF
  _BYTE v40[136]; // [esp+7Ch] [ebp-124h] BYREF
  _BYTE v41[28]; // [esp+104h] [ebp-9Ch] BYREF
  _BYTE v42[28]; // [esp+120h] [ebp-80h] BYREF
  _BYTE v43[28]; // [esp+13Ch] [ebp-64h] BYREF
  _BYTE v44[28]; // [esp+158h] [ebp-48h] BYREF
  _BYTE v45[28]; // [esp+174h] [ebp-2Ch] BYREF
  int v46; // [esp+19Ch] [ebp-4h]

  std::string::string(v41, a2);
  v5 = 0;
  v46 = 0;
  std::string::string(v43, a4);
  LOBYTE(v46) = 1;
  sub_1017A610((int)v41);
  sub_1017A610((int)v43);
  std::operator+<char>(v45, v41, " ");
  LOBYTE(v46) = 2;
  std::operator+<char>(v44, v41, "=");
  LOBYTE(v46) = 3;
  v6 = 0;
  v7 = this + 12;
  while ( 1 )
  {
    v8 = this[13];
    if ( !v8 || v6 >= (this[14] - v8) / 28 )
      break;
    v9 = this[13];
    if ( !v9 || v6 >= (this[14] - v9) / 28 )
      invalid_parameter_noinfo();
    std::string::string(v42, v5 + this[13]);
    LOBYTE(v46) = 4;
    sub_1017A610((int)v42);
    if ( !std::string::find(v42, v45, 0) || !std::string::find(v42, v44, 0) )
    {
      v10 = std::operator+<char>(v39, a2, " = ");
      LOBYTE(v46) = 5;
      v11 = std::operator+<char>(v38, v10, a3);
      v12 = this[13];
      LOBYTE(v46) = 6;
      if ( !v12 || v6 >= (this[14] - v12) / 28 )
        invalid_parameter_noinfo();
      std::string::operator=(this[13] + 28 * v6, v11);
      LOBYTE(v46) = 5;
      std::string::~string(v38);
      LOBYTE(v46) = 4;
      std::string::~string(v39);
      v13 = 0;
      if ( sub_100993B0(this) )
      {
        v31 = 0;
        do
        {
          v14 = this[1];
          if ( !v14 || v13 >= (this[2] - v14) / 28 )
            invalid_parameter_noinfo();
          if ( (unsigned __int8)std::operator==<char>(v31 + this[1], v41) )
          {
            v15 = this[5];
            if ( !v15 || v13 >= (this[6] - v15) / 28 )
              invalid_parameter_noinfo();
            std::string::operator=(v31 + this[5], a3);
          }
          v31 += 28;
          ++v13;
        }
        while ( v13 < sub_100993B0(this) );
      }
      LOBYTE(v46) = 3;
      std::string::~string(v42);
      break;
    }
    LOBYTE(v46) = 3;
    std::string::~string(v42);
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
      invalid_parameter_noinfo();
    v36 = v17;
    v18 = (CREControl *)this[5];
    if ( (unsigned int)v18 > this[6] )
      invalid_parameter_noinfo();
    v35 = v18;
    v19 = (CREControl *)this[1];
    if ( (unsigned int)v19 > this[2] )
      invalid_parameter_noinfo();
    v34 = v19;
    v20 = (CREControl *)this[9];
    if ( (unsigned int)v20 > this[10] )
      invalid_parameter_noinfo();
    v37 = v20;
    while ( 1 )
    {
      v32 = this[14];
      if ( this[13] > v32 )
        invalid_parameter_noinfo();
      if ( v36 == v32 )
        break;
      if ( v36 >= this[14] )
        invalid_parameter_noinfo();
      if ( std::string::find(v36, a4, 0) != std::string::npos )
      {
        while ( 1 )
        {
          v33 = (CREControl *)this[10];
          if ( this[9] > (unsigned int)v33 )
            invalid_parameter_noinfo();
          if ( v37 == v33 )
            break;
          if ( (unsigned int)v37 >= this[10] )
            invalid_parameter_noinfo();
          if ( (unsigned __int8)std::operator==<char>(a4, v37) )
          {
            sub_1000DC90((int)(this + 8), (int)(this + 8), v37, 1u, v43);
            sub_1000DC90((int)this, (int)this, v34, 1u, v41);
            sub_1000DC90((int)(this + 4), (int)(this + 4), v35, 1u, a3);
            break;
          }
          if ( (unsigned int)v37 >= this[10] )
            invalid_parameter_noinfo();
          v37 = (CREControl *)((char *)v37 + 28);
          if ( (unsigned int)v35 >= this[6] )
            invalid_parameter_noinfo();
          v35 = (CREControl *)((char *)v35 + 28);
          if ( (unsigned int)v34 >= this[2] )
            invalid_parameter_noinfo();
          v34 = (CREControl *)((char *)v34 + 28);
        }
        v21 = std::operator+<char>(v38, a2, " = ");
        LOBYTE(v46) = 7;
        v22 = (void *)std::operator+<char>(v39, v21, a3);
        v23 = v36 < this[14];
        LOBYTE(v46) = 8;
        if ( !v23 )
          invalid_parameter_noinfo();
        sub_1000DC90((int)(this + 12), (int)(this + 12), (CREControl *)(v36 + 28), 1u, v22);
        LOBYTE(v46) = 7;
        std::string::~string(v39);
        LOBYTE(v46) = 3;
        std::string::~string(v38);
        break;
      }
      if ( v36 >= this[14] )
        invalid_parameter_noinfo();
      v36 += 28;
    }
  }
  sub_1017AA70();
  v24 = std::string::c_str(this + 16);
  std::ofstream::ofstream(v40, v24, 2, 64, 1);
  v25 = 0;
  LOBYTE(v46) = 9;
  for ( i = 0; ; i += 28 )
  {
    v27 = v7[1];
    if ( !v27 || v25 >= (v7[2] - v27) / 28 )
      break;
    v28 = v7[1];
    if ( !v28 || v25 >= (v7[2] - v28) / 28 )
      invalid_parameter_noinfo();
    v29 = std::operator<<<char>(v40, i + v7[1]);
    std::ostream::operator<<(v29, std::endl);
    ++v25;
  }
  sub_100161F0((int)v40, (int)"//END-OF-FILE");
  std::ofstream::close(v40);
  LOBYTE(v46) = 3;
  std::ofstream::`vbase destructor'(v40);
  LOBYTE(v46) = 2;
  std::string::~string(v44);
  LOBYTE(v46) = 1;
  std::string::~string(v45);
  LOBYTE(v46) = 0;
  std::string::~string(v43);
  v46 = -1;
  return std::string::~string(v41);
}
