def solution(sequence):
    removed = 0
    previous_maximum = maximum = float('-infinity')
    for s in sequence:
        if s > maximum:
            # All good
            previous_maximum = maximum
            maximum = s
        elif s > previous_maximum:
            # Violation - remove current maximum outlier
            removed += 1
            maximum = s
        else:
            # Violation - remove current item outlier
            removed += 1
        if removed > 1:
            return False
    return True