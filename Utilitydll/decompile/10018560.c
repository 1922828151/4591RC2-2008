/*
 * func-name: ?InstallService@Utility@Outpop@@YAXPA_W@Z
 * func-address: 0x10018560
 * callers: none
 * callees: 0x10018c31
 */

void __cdecl Outpop::Utility::InstallService(LPCWSTR lpServiceName)
{
  SC_HANDLE v1; // edi
  SC_HANDLE ServiceW; // eax
  const wchar_t *Info; // [esp+8h] [ebp-418h] BYREF
  WCHAR Filename[520]; // [esp+Ch] [ebp-414h] BYREF

  v1 = OpenSCManagerA(0, 0, 2u);
  GetLastError();
  GetModuleFileNameW(0, Filename, 0x208u);
  lstrcatW(Filename, L" /service");
  ServiceW = CreateServiceW(v1, lpServiceName, lpServiceName, 2u, 0x10u, 3u, 0, Filename, 0, 0, 0, 0, 0);
  Info = L"Outpop Service";
  ChangeServiceConfig2W(ServiceW, 1u, &Info);
}
