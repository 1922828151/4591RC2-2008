/*
 * func-name: ?RemoveService@Utility@Outpop@@YAXPAD@Z
 * func-address: 0x10018600
 * callers: none
 * callees: none
 */

void __cdecl Outpop::Utility::RemoveService(LPCSTR lpServiceName)
{
  SC_HANDLE v1; // eax
  SC_HANDLE v2; // eax

  v1 = OpenSCManagerA(0, 0, 1u);
  v2 = OpenServiceA(v1, lpServiceName, 0x10000u);
  DeleteService(v2);
}
