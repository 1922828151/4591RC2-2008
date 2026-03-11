/*
 * func-name: ?DbgDumpInstall@Utility@Outpop@@YAXPBD@Z
 * func-address: 0x10014ac0
 * callers: none
 * callees: none
 */

void __cdecl Outpop::Utility::DbgDumpInstall(Outpop::Utility *this)
{
  SetUnhandledExceptionFilter(TopLevelExceptionFilter);
  strcpy_s(Destination, 0x104u, (const char *)this);
}
