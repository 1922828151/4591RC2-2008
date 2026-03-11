/*
 * func-name: sub_10004780
 * func-address: 0x10004780
 * callers: 0x1001ab50
 * callees: none
 */

void *__thiscall sub_10004780(void *this, char *String)
{
  if ( String )
    dword_100384EC = (int)strdup(String);
  else
    dword_100384EC = (int)"Application";
  SetUnhandledExceptionFilter(TopLevelExceptionFilter);
  return this;
}
