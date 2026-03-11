/*
 * func-name: ??0ISave@@QAE@ABV0@@Z
 * func-address: 0x10012240
 * callers: 0x10036880
 * callees: 0x1000d680, 0x1000e7f0, 0x1000f380
 */

ISave *__thiscall ISave::ISave(ISave *this, const struct ISave *a2)
{
  *(_DWORD *)this = &ISave::`vftable';
  std::string::string((char *)this + 4, (char *)a2 + 4);
  sub_1000F380((int)this + 32, (int)a2 + 32);
  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 12);
  sub_1000E7F0((_DWORD *)this + 13, (int)a2 + 52);
  std::vector<Material *>::vector<Material *>((_DWORD *)this + 17, (int)a2 + 68);
  return this;
}
