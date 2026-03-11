/*
 * func-name: ?SeriousWarning@@YAXPBDZZ
 * func-address: 0x100977a0
 * callers: 0x10001950, 0x100019a0, 0x100019f0, 0x10001a40, 0x10001a90, 0x10003130, 0x100042c0, 0x10006780, 0x10034c30, 0x100384a0, 0x10038ca0, 0x10041980, 0x100431a0, 0x10044cf0, 0x10045740, 0x10047a80, 0x10078420, 0x1007c450, 0x1007d280, 0x10084160, 0x10097ea0, 0x100e4db0, 0x100e6db0, 0x100ea5d0, 0x100eb8b0, 0x100f1b70, 0x10118c20, 0x1011acf0, 0x1011b080, 0x1011b1a0, 0x1011b2a0, 0x1011b490, 0x1011b780, 0x1011b870, 0x1011d270, 0x1011ed60, 0x1011ef20, 0x1011fbb0, 0x10121df0, 0x10125a30, 0x10131750, 0x101430d0, 0x1015f6b0, 0x10167c60, 0x10168040, 0x10169020, 0x10169700
 * callees: 0x100971c0, 0x100e2550, 0x101a2780
 */

void SeriousWarning(char *Format, ...)
{
  struct Engine *v1; // eax
  char Buffer[8000]; // [esp+0h] [ebp-1F40h] BYREF
  va_list ArgList; // [esp+1F48h] [ebp+8h] BYREF

  va_start(ArgList, Format);
  vsprintf(Buffer, Format, ArgList);
  LogPrintf(Buffer);
  v1 = Engine::Instance();
  MessageBoxA(*((HWND *)v1 + 35), Buffer, "Serious Warning", 0x10u);
}
