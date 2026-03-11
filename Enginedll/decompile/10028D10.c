/*
 * func-name: ??0StaticModel@@QAE@ABV0@@Z
 * func-address: 0x10028d10
 * callers: 0x10031290
 * callees: 0x1000f380, 0x100210c0, 0x10021d90
 */

StaticModel *__thiscall StaticModel::StaticModel(StaticModel *this, const struct StaticModel *a2)
{
  *(_DWORD *)this = &StaticModel::`vftable';
  *((_BYTE *)this + 4) = *((_BYTE *)a2 + 4);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 3) = &Volume::`vftable';
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 5);
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 6);
  *((_DWORD *)this + 3) = &BBox::`vftable';
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 7);
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  *((_DWORD *)this + 9) = *((_DWORD *)a2 + 9);
  *((_DWORD *)this + 10) = *((_DWORD *)a2 + 10);
  *((_DWORD *)this + 11) = *((_DWORD *)a2 + 11);
  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 12);
  *((float *)this + 13) = *((float *)a2 + 13);
  *((_BYTE *)this + 56) = *((_BYTE *)a2 + 56);
  *((_DWORD *)this + 15) = &Volume::`vftable';
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 16);
  *((_DWORD *)this + 17) = *((_DWORD *)a2 + 17);
  *((_DWORD *)this + 18) = *((_DWORD *)a2 + 18);
  *((_DWORD *)this + 15) = &BBox::`vftable';
  *((_DWORD *)this + 19) = *((_DWORD *)a2 + 19);
  *((_DWORD *)this + 20) = *((_DWORD *)a2 + 20);
  *((_DWORD *)this + 21) = *((_DWORD *)a2 + 21);
  *((_DWORD *)this + 22) = *((_DWORD *)a2 + 22);
  *((_DWORD *)this + 23) = *((_DWORD *)a2 + 23);
  *((_DWORD *)this + 24) = *((_DWORD *)a2 + 24);
  *((_DWORD *)this + 25) = *((_DWORD *)a2 + 25);
  sub_1000F380((int)this + 104, (int)a2 + 104);
  std::vector<Model *>::vector<Model *>((_DWORD *)this + 30, (int)a2 + 120);
  *((_BYTE *)this + 136) = *((_BYTE *)a2 + 136);
  *((_BYTE *)this + 137) = *((_BYTE *)a2 + 137);
  *((_BYTE *)this + 138) = *((_BYTE *)a2 + 138);
  *((_BYTE *)this + 139) = *((_BYTE *)a2 + 139);
  *((_DWORD *)this + 35) = *((_DWORD *)a2 + 35);
  *((_DWORD *)this + 36) = *((_DWORD *)a2 + 36);
  *((float *)this + 37) = 0.0;
  *((float *)this + 38) = 0.0;
  *((float *)this + 39) = 0.0;
  *((float *)this + 41) = 0.0;
  *((float *)this + 42) = 0.0;
  *((float *)this + 43) = 0.0;
  *((float *)this + 45) = 0.0;
  *((float *)this + 46) = 0.0;
  *((float *)this + 47) = 0.0;
  *((float *)this + 49) = 0.0;
  *((float *)this + 50) = 0.0;
  *((float *)this + 51) = 0.0;
  qmemcpy((char *)this + 148, (char *)a2 + 148, 0x4Cu);
  *((float *)this + 56) = 0.0;
  *((float *)this + 57) = 0.0;
  *((float *)this + 58) = 0.0;
  *((float *)this + 60) = 0.0;
  *((float *)this + 61) = 0.0;
  *((float *)this + 62) = 0.0;
  *((float *)this + 64) = 0.0;
  *((float *)this + 65) = 0.0;
  *((float *)this + 66) = 0.0;
  *((float *)this + 68) = 0.0;
  *((float *)this + 69) = 0.0;
  *((float *)this + 70) = 0.0;
  qmemcpy((char *)this + 224, (char *)a2 + 224, 0x40u);
  sub_10021D90((_DWORD *)this + 72, (int)a2 + 288);
  *((_DWORD *)this + 76) = *((_DWORD *)a2 + 76);
  *((_DWORD *)this + 77) = *((_DWORD *)a2 + 77);
  *((_BYTE *)this + 312) = *((_BYTE *)a2 + 312);
  *((_BYTE *)this + 313) = *((_BYTE *)a2 + 313);
  *((_BYTE *)this + 314) = *((_BYTE *)a2 + 314);
  *((_BYTE *)this + 315) = *((_BYTE *)a2 + 315);
  *((_DWORD *)this + 79) = *((_DWORD *)a2 + 79);
  std::string::string((char *)this + 320, (char *)a2 + 320);
  std::string::string((char *)this + 348, (char *)a2 + 348);
  return this;
}
