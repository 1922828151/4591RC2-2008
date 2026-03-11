/*
 * func-name: ?InstallService@Utility@Outpop@@YAXPAD@Z
 * func-address: 0x100184c0
 * callers: none
 * callees: 0x10018c31
 */

void __cdecl Outpop::Utility::InstallService(LPCSTR lpServiceName)
{
  SC_HANDLE v1; // edi
  SC_HANDLE ServiceA; // eax
  const char *Info; // [esp+8h] [ebp-210h] BYREF
  CHAR Filename[520]; // [esp+Ch] [ebp-20Ch] BYREF

  v1 = OpenSCManagerA(0, 0, 2u);
  GetLastError();
  GetModuleFileNameA(0, Filename, 0x208u);
  lstrcatA(Filename, " /service");
  ServiceA = CreateServiceA(v1, lpServiceName, lpServiceName, 2u, 0x10u, 3u, 0, Filename, 0, 0, 0, 0, 0);
  Info = "Outpop Service";
  ChangeServiceConfig2A(ServiceA, 1u, &Info);
}
