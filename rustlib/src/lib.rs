extern crate libc;

// Good examples at:
// https://stackoverflow.com/a/24148033
use std::ffi::CStr;
use std::os::raw::c_char;

#[cfg(test)]
mod tests {
    use std::ffi::CString;
    use std::ffi::CStr;
    use std::os::raw::c_char;
    use crate::not_hotdog;

    #[test]
    fn test_working() {
        assert_eq!(2 + 2, 4);
        let rust_str_hotdog = "hotdog";
        let rust_str_not_hotdog = "hamburger";
        unsafe {
            let c_str_hotdog:*const c_char = CString::new(rust_str_hotdog).expect("CString::new failed").as_ptr();
            let c_str_not_hotdog:*const c_char = CString::new(rust_str_not_hotdog).expect("CString::new failed").as_ptr();
            assert_eq!(not_hotdog(c_str_hotdog), false);
            assert_eq!(not_hotdog(c_str_not_hotdog), true);
        }
    }
}

#[no_mangle]
pub extern "C" fn not_hotdog(possible_hotdog_raw: *const c_char) -> bool {
    //println!("Hello from Rust!");
    let possible_hotdog_cstr: &CStr = unsafe { CStr::from_ptr(possible_hotdog_raw) };
    let possible_hotdog_slice: &str = possible_hotdog_cstr.to_str().unwrap();
    return match possible_hotdog_slice {
        "hotdog" => false,
        _ => true,
    };
}
