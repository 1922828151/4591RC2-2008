/*
 * func-name: ??0OBJSave@@QAE@ABV0@@Z
 * func-address: 0x10036880
 * callers: none
 * callees: 0x10012240
 */

OBJSave *__thiscall OBJSave::OBJSave(OBJSave *this, const struct OBJSave *a2)
{
  ISave::ISave(this, a2);
  *(_DWORD *)this = &OBJSave::`vftable';
  std::string::string((char *)this + 84, (char *)a2 + 84);
  *((_DWORD *)this + 28) = *((_DWORD *)a2 + 28);
  return this;
}
