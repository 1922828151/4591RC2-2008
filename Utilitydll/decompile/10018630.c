/*
 * func-name: ?RemoveService@Utility@Outpop@@YAXPA_W@Z
 * func-address: 0x10018630
 * callers: none
 * callees: none
 */

void __cdecl Outpop::Utility::RemoveService(LPCWSTR lpServiceName)
{
  SC_HANDLE v1; // eax
  SC_HANDLE v2; // eax

  v1 = OpenSCManagerA(0, 0, 1u);
  v2 = OpenServiceW(v1, lpServiceName, 0x10000u);
  DeleteService(v2);
}
