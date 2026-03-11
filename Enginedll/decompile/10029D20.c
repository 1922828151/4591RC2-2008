/*
 * func-name: ??0ScriptData@@QAE@ABU0@@Z
 * func-address: 0x10029d20
 * callers: 0x10029dd0
 * callees: 0x1000f380
 */

ScriptData *__thiscall ScriptData::ScriptData(ScriptData *this, const struct ScriptData *a2)
{
  std::string::string(this, a2);
  std::string::string((char *)this + 28, (char *)a2 + 28);
  std::string::string((char *)this + 56, (char *)a2 + 56);
  std::string::string((char *)this + 84, (char *)a2 + 84);
  sub_1000F380((int)this + 112, (int)a2 + 112);
  sub_1000F380((int)this + 128, (int)a2 + 128);
  *((_BYTE *)this + 144) = *((_BYTE *)a2 + 144);
  return this;
}
