/*
 * func-name: ?Exit@EngineLog@@QAEXXZ
 * func-address: 0x100e2290
 * callers: 0x10096550
 * callees: none
 */

// attributes: thunk
void __thiscall EngineLog::Exit(EngineLog *this)
{
  std::ofstream::close(this);
}
