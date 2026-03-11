/*
 * func-name: ?GetAllClasses@Editor@@QAE?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
 * func-address: 0x10084100
 * callers: none
 * callees: 0x10011fe0
 */

_DWORD *__stdcall Editor::GetAllClasses(_DWORD *a1)
{
  Factory::GetAllActorClasses(a1);
  return a1;
}
