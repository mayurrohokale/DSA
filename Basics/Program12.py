# Match Statements

def http_error(status):
    match status:
        case 400:
            return "Bad Request"
        case 401:
            return "Unauthorized"
        case 403:
            return "Forbidden"
        case _:
            return "unkonwon error"

print(http_error(400))