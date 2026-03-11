/*
 * func-name: ??1EngineLog@@QAE@XZ
 * func-address: 0x10016780
 * callers: 0x101b9010
 * callees: none
 */

void __thiscall EngineLog::~EngineLog(EngineLog *this)
{
  std::string::~string((char *)this + 136);
  std::ofstream::`vbase destructor'(this);
}
