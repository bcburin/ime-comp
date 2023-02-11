function parseTitle(title) {
    const titleElements = title.split('-');
    let prefix = null;
    let mainTitle = null;
    if (titleElements.length == 1) {
        mainTitle = titleElements[0];
    } else if (titleElements.length == 2) {
        prefix = titleElements[0];
        mainTitle = titleElements[1];
    } else {
        mainTitle = title;
    }
    return [prefix ? prefix.trim() : null, mainTitle.trim()];
}

function readPrefixAsTag(fileTitle) {
    const [prefix,] = parseTitle(fileTitle);
    return prefix ? `#${prefix.trim().toLowerCase()}` : '';
}

module.exports = readPrefixAsTag;