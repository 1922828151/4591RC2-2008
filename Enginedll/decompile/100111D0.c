/*
 * func-name: ??1ScriptData@@QAE@XZ
 * func-address: 0x100111d0
 * callers: 0x10006230, 0x10006780, 0x10029dd0, 0x10038ca0, 0x10045740, 0x10050b80, 0x10050e70, 0x100511a0
 * callees: 0x1000db00
 */

void __thiscall ScriptData::~ScriptData(ScriptData *this)
{
  sub_1000DB00((int *)this + 32);
  sub_1000DB00((int *)this + 28);
  std::string::~string((char *)this + 84);
  std::string::~string((char *)this + 56);
  std::string::~string((char *)this + 28);
  std::string::~string(this);
}
