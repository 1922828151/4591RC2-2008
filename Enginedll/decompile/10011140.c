/*
 * func-name: ??0ScriptData@@QAE@XZ
 * func-address: 0x10011140
 * callers: 0x10006230, 0x10006780, 0x10038ca0, 0x10045740, 0x10050b80, 0x10050e70
 * callees: none
 */

ScriptData *__thiscall ScriptData::ScriptData(ScriptData *this)
{
  std::string::string(this);
  std::string::string((char *)this + 28);
  std::string::string((char *)this + 56);
  std::string::string((char *)this + 84);
  *((_DWORD *)this + 29) = 0;
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 31) = 0;
  *((_DWORD *)this + 33) = 0;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 35) = 0;
  *((_BYTE *)this + 144) = 1;
  return this;
}
