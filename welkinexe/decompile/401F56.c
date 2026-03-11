/*
 * func-name: _invoke_watson
 * func-address: 0x401f56
 * callers: 0x401e2e, 0x401e50
 * callees: none
 */

// attributes: thunk
void __cdecl __noreturn invoke_watson(
        const wchar_t *Expression,
        const wchar_t *FunctionName,
        const wchar_t *FileName,
        unsigned int LineNo,
        uintptr_t Reserved)
{
  _invoke_watson(Expression, FunctionName, FileName, LineNo, Reserved);
}
