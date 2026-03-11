/*
 * func-name: sub_10031EC0
 * func-address: 0x10031ec0
 * callers: 0x10032240, 0x10032970, 0x100329e0, 0x10032a70, 0x10171b80, 0x10172570, 0x10172700, 0x10173030, 0x10174960, 0x10174aa0, 0x10174d80, 0x10175180, 0x10175470
 * callees: 0x10013780, 0x101a2500
 */

int __thiscall sub_10031EC0(int *this)
{
  int v2; // eax
  int *v3; // esi
  int v4; // eax
  int v5; // eax
  int v6; // eax

  v2 = this[27];
  v3 = this + 26;
  if ( v2 )
  {
    sub_10013780(v2, this[28]);
    operator delete((void *)v3[1]);
  }
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  v4 = this[23];
  if ( v4 )
  {
    sub_10013780(v4, this[24]);
    operator delete((void *)this[23]);
  }
  this[23] = 0;
  this[24] = 0;
  this[25] = 0;
  v5 = this[19];
  if ( v5 )
  {
    sub_10013780(v5, this[20]);
    operator delete((void *)this[19]);
  }
  this[19] = 0;
  this[20] = 0;
  this[21] = 0;
  v6 = this[15];
  if ( v6 )
  {
    sub_10013780(v6, this[16]);
    operator delete((void *)this[15]);
  }
  this[15] = 0;
  this[16] = 0;
  this[17] = 0;
  std::string::~string(this + 7);
  return std::string::~string(this);
}
