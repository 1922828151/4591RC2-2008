/*
 * func-name: ??1OBJSave@@QAE@XZ
 * func-address: 0x10036830
 * callers: none
 * callees: 0x10010930
 */

void __thiscall OBJSave::~OBJSave(OBJSave *this)
{
  std::string::~string((char *)this + 84);
  ISave::~ISave(this);
}
