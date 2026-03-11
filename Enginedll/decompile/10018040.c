/*
 * func-name: ??4SkySettings@@QAEAAV0@ABV0@@Z
 * func-address: 0x10018040
 * callers: 0x100306d0
 * callees: none
 */

float *__thiscall SkySettings::operator=(float *this, float *a2)
{
  *(_BYTE *)this = *(_BYTE *)a2;
  *((_BYTE *)this + 1) = *((_BYTE *)a2 + 1);
  *((_BYTE *)this + 2) = *((_BYTE *)a2 + 2);
  this[1] = a2[1];
  this[2] = a2[2];
  this[3] = a2[3];
  this[4] = a2[4];
  this[5] = a2[5];
  this[6] = a2[6];
  this[7] = a2[7];
  this[8] = a2[8];
  this[9] = a2[9];
  *((_BYTE *)this + 40) = *((_BYTE *)a2 + 40);
  *((_BYTE *)this + 41) = *((_BYTE *)a2 + 41);
  this[11] = a2[11];
  this[12] = a2[12];
  this[13] = a2[13];
  *((_BYTE *)this + 56) = *((_BYTE *)a2 + 56);
  *((_BYTE *)this + 57) = *((_BYTE *)a2 + 57);
  this[15] = a2[15];
  this[16] = a2[16];
  this[17] = a2[17];
  this[18] = a2[18];
  this[19] = a2[19];
  this[20] = a2[20];
  this[21] = a2[21];
  this[22] = a2[22];
  this[23] = a2[23];
  this[24] = a2[24];
  this[25] = a2[25];
  this[26] = a2[26];
  std::string::operator=(this + 27, a2 + 27);
  std::string::operator=(this + 34, a2 + 34);
  std::string::operator=(this + 41, a2 + 41);
  std::string::operator=(this + 48, a2 + 48);
  std::string::operator=(this + 55, a2 + 55);
  std::string::operator=(this + 62, a2 + 62);
  std::string::operator=(this + 69, a2 + 69);
  std::string::operator=(this + 76, a2 + 76);
  std::string::operator=(this + 83, a2 + 83);
  std::string::operator=(this + 90, a2 + 90);
  std::string::operator=(this + 97, a2 + 97);
  std::string::operator=(this + 104, a2 + 104);
  std::string::operator=(this + 111, a2 + 111);
  std::string::operator=(this + 118, a2 + 118);
  this[125] = a2[125];
  return this;
}
