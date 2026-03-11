/*
 * func-name: ??0OBJSave@@QAE@XZ
 * func-address: 0x100367e0
 * callers: 0x1011abe0
 * callees: 0x100108d0
 */

OBJSave *__thiscall OBJSave::OBJSave(OBJSave *this)
{
  ISave::ISave(this);
  *(_DWORD *)this = &OBJSave::`vftable';
  std::string::string((char *)this + 84);
  return this;
}
