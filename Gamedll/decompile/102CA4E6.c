/*
 * func-name: mbstowcs
 * func-address: 0x102ca4e6
 * callers: none
 * callees: none
 */

// attributes: thunk
size_t __cdecl mbstowcs(wchar_t *Dest, const char *Source, size_t MaxCount)
{
  return __imp_mbstowcs(Dest, Source, MaxCount);
}
